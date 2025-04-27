/* to easily run the game type this in the terminal:

./make   (this compiles the program so you need to run this line each time you edit the code)
./main
*/
// -lssl -lcrypto

/*
g++ AICodeImproved.cpp database.cpp GameLogicTest.cpp PasswordHash.cpp -o main -lsqlite3 -lssl -lcrypto
.\main
*/
#include<iostream>
#include "AItest.h"
#include "queue.h"
#include <sqlite3.h>

using namespace std;

void printgrid(int grid[3][3]);
int checkWin(int grid[3][3] , sqlite3 *db);
void OPEN_PROGRAM(short int &mode);

unsigned short int gameMode=0;
unsigned short int DiffModeForAI=0;
Difficulty levelMode;
short int REG_Mode=0;


int main() {
    
    int grid [3][3]= {0};  // in qt this will be array of button objects
    float FirstPlayer,SecondPlayer;
    int GameEnd=0;
    queue xq;
    queue oq;
    int x ;
    short int ret=0;
    bool loginFound=false;

    //**************************************************  APP STARTED AND REG PART *****************************
    sqlite3 *db;
    sqlite3_open("game_data.db", &db);
    
    createTables(db);

    start_sign_in:
    OPEN_PROGRAM(REG_Mode);
    
    if(REG_Mode==SIGNUP){
        SIGN_UP(db);
        loginFound=true;
    }
    else if(REG_Mode==LOGIN){
        while(!loginFound && ret++<3)
            loginFound=LOG_IN(db);
    }else if(REG_Mode==GUSET){
        goto start_IF_Guset_MODE;
    }
    if(!loginFound){
        exit(1);
    }
    //**************************************************  END OF LOGIN PART *************************************

    start_IF_Guset_MODE:

    cout<<"******************** GAME STARTED !**********************"<<"\n";

    ReTakePlayMode:

    cout<<"SELECT MODE\nAI->1\nPVP -> 2\nInfinite PVP -> 3\nView Game History -> 0\nLOG OUT->9\n";
        cin>>gameMode;
        
    if(!gameMode && REG_Mode!=GUSET ){
        viewGameHistory(db);
        exit(0);
    } 
    else if(REG_Mode==GUSET && !gameMode){ 
        cout<<"you are in guset Mode\n";
        goto ReTakePlayMode;
    }

    if(gameMode==IPVP_MODE){
        cout<<"xq :" ;
        xq.debug();
        cout<<"oq :";
        oq.debug();
    }

    if(gameMode==LOGOUT && REG_Mode!=GUSET){
        cout<<"Logout Succesfully\n";
        loginFound=false;
        goto start_sign_in;
    } else if(REG_Mode==GUSET && gameMode==LOGOUT){ 
        cout<<"you are in guset Mode\nGame EXIT!\n";
        exit(0);
    }

    if(gameMode==AI_MODE){
        for (int i = 0; i < 3; i++)
        {
            cout<<"Choose difficulty:\n1. Easy\n2. Medium\n3. Hard\n > ";
            cin>>DiffModeForAI;
            if(DiffModeForAI !=1 && DiffModeForAI !=2 && DiffModeForAI !=3 ){
                cout<<"Enter a Vailed Mode\n > ";
                cin>>DiffModeForAI;
            }
            else 
            break;
        }
        if(DiffModeForAI !=1 && DiffModeForAI !=2 && DiffModeForAI !=3 ){
            DiffModeForAI==3;
            cout<<"Your Mode Forced to be hard HAHAHAHA\n";
        }
        levelMode=static_cast<Difficulty>(DiffModeForAI);
    }
    
    printgrid(grid);

    while(!GameEnd){

        cout<<"Player X turn choose a block: ";
        cin>>FirstPlayer;
        while(grid[int(FirstPlayer/3.5)][int(FirstPlayer-1)%3] != 0){
            cout<<"Player X turn choose another block: ";
            cin>>FirstPlayer;
        }
             // ! this line should be in PVP MODE INF onlyyyyyyyyyy
        if(gameMode==IPVP_MODE){
        x = xq.push(FirstPlayer);
        
        if (x>0)
            grid[int(x/3.5)][int(x-1)%3] = 0;

            cout<<"xq :" ;
            xq.debug();
            cout<<"oq :";
            oq.debug();
        }
        grid[int(FirstPlayer/3.5)][int(FirstPlayer-1)%3] = 1;  // in qt we won't use this as we will click on the grid we want
        printgrid(grid);
        GameEnd =checkWin(grid, db);
        
        if (GameEnd)
        break;
            //  ! problem here i need to take input from AI
        if(gameMode==PVP_MODE){
            cout<<"Player O turn choose a block: ";
            cin>>SecondPlayer;
            while(grid[int(SecondPlayer/3.5)][int(SecondPlayer-1)%3] != 0){
                cout<<"Player O turn choose another block: ";
                cin>>SecondPlayer;
            }
            grid[int(SecondPlayer/3.5)][int(SecondPlayer-1)%3]=2;  // in qt we won't use this as we will click on the grid we want
        } 
        else if (gameMode==AI_MODE){
            pair<int, int> aiMove = findBestMove(grid ,levelMode);
            grid[aiMove.first][aiMove.second] = 2;
        }
        else{

            cout<<"Player O turn choose a block: ";
            cin>>SecondPlayer;
            while(grid[int(SecondPlayer/3.5)][int(SecondPlayer-1)%3] != 0){
                cout<<"Player O turn choose another block: ";
                cin>>SecondPlayer;
            }

            x = oq.push(SecondPlayer);

            if (x>0)
            grid[int(x/3.5)][int(x-1)%3] = 0;

            cout<<"xq :" ;
            xq.debug();
            cout<<"oq :";
            oq.debug();

            grid[int(SecondPlayer/3.5)][int(SecondPlayer-1)%3]=2;
        }
    
            //   ! end of sellect
        cout<<"---------------------------------------------\n";
        printgrid(grid);
        GameEnd =checkWin(grid , db);

        }
        sqlite3_close(db);
        return 0;
}

void printgrid(int grid[3][3]){
    short int NumberOfBoxes=1;
    for(int i =0; i<3; i++){
        for(int j =0; j<3; j++){
            if(grid[i][j]==0)
                cout<<" "<<NumberOfBoxes<<" ";
            else if(grid[i][j]==1)
                cout<<" X ";
            else
                cout<<" O ";
            if(j!=2)
                cout<<" | ";
        NumberOfBoxes++;     
        }
        cout<<"\n";
        if(i!=2)
            cout<<"---------------";
        cout<<"\n";
    }
}

int checkWin(int grid [3][3] ,sqlite3 *db ){

    if(grid[0][0] == grid[0][1] && grid[0][1] == grid[0][2]){
        if(grid[0][0]==1){
            cout<<"Player X Win!";
            if(REG_Mode!=GUSET)
                saveGameHistory(db, "WIN");
            return 1;
        }
        if(grid[0][0]==2){
            gameMode==AI_MODE ? cout<<" AI Win!" : cout<<"Player O Win!";
            if(REG_Mode!=GUSET)
                saveGameHistory(db, "lOSS");
            return 1;
        }
        
    }
    
    if(grid[1][0] == grid[1][1] && grid[1][1] == grid[1][2]){
        if(grid[1][0]==1){
            cout<<"Player X Win!";
            if(REG_Mode!=GUSET)
                saveGameHistory(db, "WIN");
            return 1;
        }
        if(grid[1][0]==2){
            gameMode==AI_MODE ? cout<<" AI Win!" : cout<<"Player O Win!";
            if(REG_Mode!=GUSET)
                saveGameHistory(db, "lOSS");
            return 1;
        }
    }

    if(grid[2][0] == grid[2][1] && grid[2][1] == grid[2][2]){
        if(grid[2][0]==1){
            cout<<"Player X Win!";
            if(REG_Mode!=GUSET)    
                saveGameHistory(db, "WIN");
            return 1;
        }
        if(grid[2][0]==2){
            gameMode==AI_MODE ? cout<<" AI Win!" : cout<<"Player O Win!";
            if(REG_Mode!=GUSET)
                saveGameHistory(db, "lOSS");
            return 1;
        }
    }

    if(grid[0][0] == grid[1][0] && grid[1][0] == grid[2][0]){
        if(grid[0][0]==1){
            cout<<"Player X Win!";
            if(REG_Mode!=GUSET)
                saveGameHistory(db, "WIN");
            return 1;
        }
        if(grid[0][0]==2){
            gameMode==AI_MODE ? cout<<" AI Win!" : cout<<"Player O Win!";
            if(REG_Mode!=GUSET)
                saveGameHistory(db, "lOSS");
            return 1;
        }
    }

    if(grid[0][1] == grid[1][1] && grid[1][1] == grid[2][1]){
        if(grid[0][1]==1){
            cout<<"Player X Win!";
            if(REG_Mode!=GUSET)
                saveGameHistory(db, "WIN");
            return 1;
        }
        if(grid[0][1]==2){
            gameMode==AI_MODE ? cout<<" AI Win!" : cout<<"Player O Win!";
            if(REG_Mode!=GUSET)
                saveGameHistory(db, "lOSS");
            return 1;
        }
    }

    if(grid[0][2] == grid[1][2] && grid[1][2] == grid[2][2]){
        if(grid[0][2]==1){
            cout<<"Player X Win!";
            if(REG_Mode!=GUSET)
                saveGameHistory(db, "WIN");
            return 1;
        }
        if(grid[0][2]==2){
            gameMode==AI_MODE ? cout<<" AI Win!" : cout<<"Player O Win!";
            if(REG_Mode!=GUSET)
                saveGameHistory(db, "lOSS");
            return 1;
        }
    }

    if(grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]){
        if(grid[0][0]==1){
            cout<<"Player X Win!";
            if(REG_Mode!=GUSET)
                saveGameHistory(db, "WIN");
            return 1;
        }
        if(grid[0][0]==2){
            gameMode==AI_MODE ? cout<<" AI Win!" : cout<<"Player O Win!";
            if(REG_Mode!=GUSET)
                saveGameHistory(db, "lOSS");
            return 1;
        }
    }

    if(grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0]) // bug fixed : this diagonal was written with wrong indexing
    {
        if(grid[0][2]==1){
            cout<<"Player X Win!";
            if(REG_Mode!=GUSET)
                saveGameHistory(db, "WIN");
            return 1;
        }
        if(grid[0][2]==2){
            gameMode==AI_MODE ? cout<<" AI Win!" : cout<<"Player O Win!";
            if(REG_Mode!=GUSET)
                saveGameHistory(db, "lOSS");
            return 1;
        }
    }

    int draw=0;

    for(int i =0; i<3; i++){
        for(int j =0; j<3; j++){

            if(grid[i][j]!=0)
                draw+=1;
        }
    }

    if(draw == 9){
        cout<<" >>> Draw! <<<";
        if(REG_Mode!=GUSET)
            saveGameHistory(db, "DRAW");
        return 1;
    }
    
    return 0;
}
void OPEN_PROGRAM(short int &mode){
    for (int i = 0; i < 3; i++)
    {
        cout<<"For Signup Press 1\nFor Login Press 2\nFor Guset Mode 3\n> "; 
        cin>>mode;  
        if(mode !=1 && mode !=2 && mode !=3 ){
            cout<<"Enter a Vailed reg Mode\n > ";
            cin>>mode;
        }
        else 
            break;
    }
    if(mode !=1 && mode !=2 && mode !=3 ){
        cout<<"pls try again later\n";
        exit(0);
    }

}