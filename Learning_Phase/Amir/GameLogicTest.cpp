#include<iostream>

using namespace std;

void printgrid(int grid[3][3]);
int checkWin(int grid[3][3]);

int main() {

    int grid [3][3]= {0};  // in qt this will be array of button objects
    float x;
    int GameEnd=0;

    cout<<"game started!"<<"\n";
    printgrid(grid);
    while(!GameEnd){

        cout<<"Player X turn choose a block: ";
        cin>>x;
        while(grid[int(x/3.5)][int(x-1)%3] != 0){
            cout<<"Player X turn choose another block: ";
            cin>>x;
        }
        grid[int(x/3.5)][int(x-1)%3]=1;  // in qt we won't use this as we will click on the grid we want
        printgrid(grid);

        GameEnd =checkWin(grid);
        if (GameEnd)
        break;
    
        cout<<"Player O turn choose a block: ";
        cin>>x;
        while(grid[int(x/3.5)][int(x-1)%3] != 0){
            cout<<"Player O turn choose another block: ";
            cin>>x;
        }
        grid[int(x/3.5)][int(x-1)%3]=2;  // in qt we won't use this as we will click on the grid we want
        printgrid(grid);
    
        GameEnd =checkWin(grid);

    }
  
}

void printgrid(int grid[3][3]){

    for(int i =0; i<3; i++){

        for(int j =0; j<3; j++){
            if(grid[i][j]==0)
            cout<<" ";
            else if(grid[i][j]==1)
            cout<<"X";
            else
            cout<<"O";
            if(j!=2)
            cout<<"|";
         }

         cout<<"\n";
         if(i!=2)
         cout<<"------";
         cout<<"\n";
    }
     


}

int checkWin(int grid [3][3]){

    if(grid[0][0] == grid[0][1] && grid[0][1] == grid[0][2]){
        if(grid[0][0]==1){
            cout<<"Player X Win!";
            return 1;
        }
        if(grid[0][0]==2){
            cout<<"Player O Win!";
            return 1;
        }
 
    }

    if(grid[1][0] == grid[1][1] && grid[1][1] == grid[1][2]){
        if(grid[1][0]==1){
            cout<<"Player X Win!";
            return 1;
        }
        if(grid[1][0]==2){
            cout<<"Player O Win!";
            return 1;
        }
    }

    if(grid[2][0] == grid[2][1] && grid[2][1] == grid[2][2]){
        if(grid[2][0]==1){
            cout<<"Player X Win!";
            return 1;
        }
        if(grid[2][0]==2){
            cout<<"Player O Win!";
            return 1;
        }
    }

    if(grid[0][0] == grid[1][0] && grid[1][0] == grid[2][0]){
        if(grid[0][0]==1){
            cout<<"Player X Win!";
            return 1;
        }
        if(grid[0][0]==2){
            cout<<"Player O Win!";
            return 1;
        }
    }

    if(grid[0][1] == grid[1][1] && grid[1][1] == grid[2][1]){
        if(grid[0][1]==1){
            cout<<"Player X Win!";
            return 1;
        }
        if(grid[0][1]==2){
            cout<<"Player O Win!";
            return 1;
        }
    }

    if(grid[0][2] == grid[1][2] && grid[1][2] == grid[2][2]){
        if(grid[0][2]==1){
            cout<<"Player X Win!";
            return 1;
        }
        if(grid[0][2]==2){
            cout<<"Player O Win!";
            return 1;
        }
    }

    if(grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]){
        if(grid[0][0]==1){
            cout<<"Player X Win!";
            return 1;
        }
        if(grid[0][0]==2){
            cout<<"Player O Win!";
            return 1;
        }
    }

    if(grid[0][2] == grid[1][1] && grid[1][1] == grid[2][2]){
        if(grid[0][2]==1){
            cout<<"Player X Win!";
            return 1;
        }
        if(grid[0][2]==2){
            cout<<"Player O Win!";
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
        cout<<"Draw!";
        return 1;
    }
    
    return 0;
}
