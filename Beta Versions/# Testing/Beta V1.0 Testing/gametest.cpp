#include "gametest.h"
#include "PublicWindows.h"





GameTest::GameTest() {
    if (QFile::exists(AuthPath)) {
        if (QFile::remove(AuthPath)) {
            qDebug() << "Session Authantication File deleted:" << AuthPath;
            qDebug() << "Ready for the test";
        } else {
            qDebug() << "Failed to delete file:" << AuthPath;
        }
    } else {
        qDebug() << "File does not exist:" << AuthPath;
    }

}

// void GameTest::runAllTestsInOrder(){
//     TestSignUp ();
//     TestLogout ();
//     TestSignIn();
//     TestBlankBoardCase1();
//     TestGamePlay();
//     TestBoardLocking();
//     TestReMatch();
//     TestCheckWin();
//     TestHistorySave();
// }

void GameTest::TestSignUp (){


    LoginWindow->show();

    QTest::mouseClick(LoginWindow->SignUpButton, Qt::LeftButton);
    QTest::keyClicks(LoginWindow->NameInput, "99");
    QTest::keyClicks(LoginWindow->PassInput, "99");
    QTest::keyClicks(LoginWindow->ConfPassInput, "99");
    QTest::keyClicks(LoginWindow->NumInput, "99");
    QTest::mouseClick(LoginWindow->LogUserButton, Qt::LeftButton);

    QFile file(AuthPath);
    QVERIFY(file.exists());
}

void GameTest::TestLogout(){
  QTest::mouseClick(Gamewindow2->Profile, Qt::LeftButton);
   QTest::mouseClick(Gamewindow2->LogOut, Qt::LeftButton);

  QFile file(AuthPath);
  QVERIFY(!file.exists());
}

void GameTest::TestSignIn(){
    QTest::mouseClick(LoginWindow->LoginButton, Qt::LeftButton);
    QTest::keyClicks(LoginWindow->NameInput, "99");
    QTest::keyClicks(LoginWindow->PassInput, "99");
    QTest::mouseClick(LoginWindow->LogUserButton, Qt::LeftButton);

    QFile file(AuthPath);
    QVERIFY(file.exists());
}

void GameTest::TestBlankBoardCase1(){
    QTest::mouseClick(Gamewindow2->StartGame, Qt::LeftButton);
    QTest::mouseClick(Gamewindow2->PVP, Qt::LeftButton);
    QTest::mouseClick(Gamewindow2->Normal, Qt::LeftButton);

    bool IsBlank=true;

    for(int i=0; i<9; i++){
        IsBlank &= (Gamewindow2->GridButtons[i]->text()=="");
    }

    QVERIFY(IsBlank);
}

void GameTest::TestGamePlay(){  // to test player turns switching , validate button clicks to be X or O
    int playsequence[9] ={0,2,5,3,1,4,6,7,8};  // the game to be played
    QString GameScenario[9] = {"X","X","O","O","O","X","X","O","X"};
    QString Moves[9]; // i will check here the moves sequence to be X , O alternativly and also test if the buttons text has changed at all

    for(int i=0; i<9; i++){
        QTest::mouseClick(Gamewindow2->GridButtons[playsequence[i]], Qt::LeftButton);
        Moves[i] =Gamewindow2->GridButtons[playsequence[i]]->text();
    }

    bool trueMoves=true;

    for(int i=0; i<9; i++){
        trueMoves &= (Gamewindow2->GridButtons[i]->text()== GameScenario[i]);
    }

    QVERIFY(trueMoves);
}

void GameTest::TestBoardLocking(){

    /* here we will use another game scenatio put we note  that we didn't clear the board after the previous test
       so the board must be locked and the buttons must not take any input from the new scenario
    */

    int playsequence[9] ={2,0,3,1,4,5,7,6,8};  // the game to be played {"O","O","X","X","X","O","O","X","X"} we need a meeting to discuss this

    QString OldGameScenario[9] = {"X","X","O","O","O","X","X","O","X"};
    QString Moves[9]; // i will check here the moves sequence to be X , O alternativly and also test if the buttons text is changed at all

    for(int i=0; i<9; i++){
        QTest::mouseClick(Gamewindow2->GridButtons[playsequence[i]], Qt::LeftButton);
        Moves[i] =Gamewindow2->GridButtons[playsequence[i]]->text();
    }

    bool trueMoves=true;

    for(int i=0; i<9; i++){
        trueMoves &= (Gamewindow2->GridButtons[i]->text() == OldGameScenario[i]); // all buttons must not accept the new scenario
    }

    QVERIFY(trueMoves);

}

void GameTest::TestReMatch(){
    QTest::mouseClick(Gamewindow2->ReMatchButton, Qt::LeftButton);

    bool IsBlank=true;

    for(int i=0; i<9; i++){
        IsBlank &= (Gamewindow2->GridButtons[i]->text()=="");
    }

    QVERIFY(IsBlank);
}

void GameTest::TestCheckWin(){
    bool correct = true;
    int playsequence1[9] ={0,1,3,4,6,0,0,0,0};  //case 1 player x collected the first coulmn////////////////////
    int playsequence2[9] ={0,3,1,4,6,5,0,0,0};  //case 2 player o collected the second coulmn///////////////////
    int playsequence3[9] ={2,1,5,4,8,0,0,0,0};  //case 3 player x collected the third coulmn////////////////
    int playsequence4[9] ={6,0,7,1,3,2,0,0,0};  //case 4 player o collected the first row///////////////////////
    int playsequence5[9] ={3,0,4,1,5,0,0,0,0};  //case 5 player x collected the second row
    int playsequence6[9] ={0,6,1,7,3,8,0,0,0};  //case 6 player o collected the third row
    int playsequence7[9] ={0,3,4,6,8,0,0,0,0};  //case 7 player x collected the first diagonal
    int playsequence8[9] ={0,2,1,4,5,6,0,0,0};  //case 8 player o collected the second diagonal

    for(int i=0; i<9; i++){
        QTest::mouseClick(Gamewindow2->GridButtons[playsequence1[i]], Qt::LeftButton);
    }

    correct&= (Gamewindow2->WinnerText->text() == "Player X Win!");
    QTest::mouseClick(Gamewindow2->ReMatchButton, Qt::LeftButton);
    QTest::qWait(1000);  // Waits for 1 second


    for(int i=0; i<9; i++){
        QTest::mouseClick(Gamewindow2->GridButtons[playsequence2[i]], Qt::LeftButton);
    }

    correct&= (Gamewindow2->WinnerText->text() == "Player O Win!");
    QTest::mouseClick(Gamewindow2->ReMatchButton, Qt::LeftButton);
    QTest::qWait(1000);  // Waits for 1 second

    for(int i=0; i<9; i++){
        QTest::mouseClick(Gamewindow2->GridButtons[playsequence3[i]], Qt::LeftButton);
    }

    correct&= (Gamewindow2->WinnerText->text() == "Player X Win!");
    QTest::mouseClick(Gamewindow2->ReMatchButton, Qt::LeftButton);
    QTest::qWait(1000);  // Waits for 1 second

    for(int i=0; i<9; i++){
        QTest::mouseClick(Gamewindow2->GridButtons[playsequence4[i]], Qt::LeftButton);
    }

    correct&= (Gamewindow2->WinnerText->text() == "Player O Win!");
    QTest::mouseClick(Gamewindow2->ReMatchButton, Qt::LeftButton);
        QTest::qWait(1000);  // Waits for 1 second

    for(int i=0; i<9; i++){
        QTest::mouseClick(Gamewindow2->GridButtons[playsequence5[i]], Qt::LeftButton);
    }

    correct&= (Gamewindow2->WinnerText->text() == "Player X Win!");
    QTest::mouseClick(Gamewindow2->ReMatchButton, Qt::LeftButton);
        QTest::qWait(1000);  // Waits for 1 second

    for(int i=0; i<9; i++){
        QTest::mouseClick(Gamewindow2->GridButtons[playsequence6[i]], Qt::LeftButton);
    }

    correct&= (Gamewindow2->WinnerText->text() == "Player O Win!");
    QTest::mouseClick(Gamewindow2->ReMatchButton, Qt::LeftButton);
        QTest::qWait(1000);  // Waits for 1 second

    for(int i=0; i<9; i++){
        QTest::mouseClick(Gamewindow2->GridButtons[playsequence7[i]], Qt::LeftButton);
    }

    correct&= (Gamewindow2->WinnerText->text() == "Player X Win!");
    QTest::mouseClick(Gamewindow2->ReMatchButton, Qt::LeftButton);
        QTest::qWait(1000);  // Waits for 1 second

    for(int i=0; i<9; i++){
        QTest::mouseClick(Gamewindow2->GridButtons[playsequence8[i]], Qt::LeftButton);
    }

    correct&= (Gamewindow2->WinnerText->text() == "Player O Win!");
    QTest::mouseClick(Gamewindow2->ReMatchButton, Qt::LeftButton);
    QTest::qWait(1000);  // Waits for 1 second

    QVERIFY(correct);
}

void GameTest::TestHistorySave(){  // this test always fails if we checked for the last 5 played games the problem is the timing as the gametest is do fast

    int his[9][9]={0};
    int gameNumber = 1;

    QString username = QString::fromStdString(G_UserName);  // assuming G_UserName is std::string
    std::string sql = "SELECT result, timestamp, moves FROM game_history WHERE username='" + G_UserName + "' ORDER BY timestamp DESC LIMIT 5;";
    sqlite3_stmt* stmt;

    int rc = sqlite3_prepare_v2(Testdb, sql.c_str(), -1, &stmt, 0);
    if (rc != SQLITE_OK) {
        qDebug() << "Failed to fetch game history:" << sqlite3_errmsg(Testdb);
        return;
    }

    while (sqlite3_step(stmt) == SQLITE_ROW) {
    // Get the moves string from the database
    const unsigned char* movesText = sqlite3_column_text(stmt, 2);
    std::string movesStr = movesText ? reinterpret_cast<const char*>(movesText) : "";

    // Split the string by comma and convert to int
    std::stringstream ss(movesStr);
    std::string token;
    int index = 0;

   // std::cout << "movesStr: '" << movesStr << "'" << std::endl;


    while (std::getline(ss, token, ',') && index < 9) {
        his[gameNumber-1][index++] = std::stoi(token);
    }
    // for(int i=0; i<9; i++){
    //     qDebug() << "played:" << his[gameNumber-1][i];
    // }

       gameNumber++;
    }





   bool correct = true;
    int playsequence4[9] ={16,20,17,21,13,22,0,0,0};  //case 4 player o collected the first row///////////////////////
    int playsequence5[9] ={13,20,14,21,15,0,0,0,0};  //case 5 player x collected the second row
    int playsequence6[9] ={10,26,11,27,13,28,0,0,0};  //case 6 player o collected the third row
    int playsequence7[9] ={10,23,14,26,18,0,0,0,0};  //case 7 player x collected the first diagonal
    int playsequence8[9] ={10,22,11,24,15,26,0,0,0};  //case 8 player o collected the second diagonal

   for(int i=0; i<9; i++)
   {
        correct&= (his[0][i] == playsequence8[i]);
        correct&= (his[1][i] == playsequence7[i]);
        correct&= (his[2][i] == playsequence6[i]);
        correct&= (his[3][i] == playsequence5[i]);
        correct&= (his[4][i] == playsequence4[i]);
    }

    QVERIFY(correct);
}
