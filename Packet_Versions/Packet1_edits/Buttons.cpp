/*
 * ----------------------------------------------------
 *
 *  here we define all buttons functionality
 *
 *  contains:
 *
 * ----------------------------------------------------
*/

#include"Buttons.h"



void initializeGrid(){

    for (int i = 0; i < 9; ++i)
    {
        Grid[i] = new QPushButton(QString("%1").arg(i+1),&window);
    }


    // here we define the grid buttons and ther positions and the fonts and sizes
    Grid[0]->setFixedSize(100, 100);
    Grid[1]->setFixedSize(100, 100);
    Grid[2]->setFixedSize(100, 100);
    Grid[3]->setFixedSize(100, 100);
    Grid[4]->setFixedSize(100, 100);
    Grid[5]->setFixedSize(100, 100);
    Grid[6]->setFixedSize(100, 100);
    Grid[7]->setFixedSize(100, 100);
    Grid[8]->setFixedSize(100, 100);
}

ReMatchButton = new QPushButton("review game", &window);
ShowHistoryButton = new QPushButton("Re-match", &window);
