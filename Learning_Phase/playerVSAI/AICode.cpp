#include <iostream>
#include <limits>
using namespace std;

const int PLAYER = 1; 
const int AI = 2;     

// Check if there are moves left
bool isMovesLeft(int board[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == 0)
                return true;
    return false;
}

// Evaluate board: +10 if AI wins, -10 if player wins
int evaluate(int board[3][3]) {
    // Rows, cols, diagonals
    for (int row = 0; row < 3; row++)
        if (board[row][0] == board[row][1] &&
            board[row][1] == board[row][2]) {
            if (board[row][0] == AI) return +10;
            else if (board[row][0] == PLAYER) return -10;
        }

    for (int col = 0; col < 3; col++)
        if (board[0][col] == board[1][col] &&
            board[1][col] == board[2][col]) {
            if (board[0][col] == AI) return +10;
            else if (board[0][col] == PLAYER) return -10;
        }

    if (board[0][0] == board[1][1] &&
        board[1][1] == board[2][2]) {
        if (board[0][0] == AI) return +10;
        else if (board[0][0] == PLAYER) return -10;
    }

    if (board[0][2] == board[1][1] &&
        board[1][1] == board[2][0]) {
        if (board[0][2] == AI) return +10;
        else if (board[0][2] == PLAYER) return -10;
    }

    return 0; // No winner
}

// The minimax algorithm
int minimax(int board[3][3], int depth, bool isMax) {
    int score = evaluate(board);

    // Win/loss detected
    if (score == 10 || score == -10)
        return score - depth; // Depth helps AI pick faster wins
    if (!isMovesLeft(board))
        return 0; // Tie

    if (isMax) {
        int best = std::numeric_limits<int>::min();
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                if (board[i][j] == 0) {
                    board[i][j] = AI;
                    best = max(best, minimax(board, depth + 1, false));
                    board[i][j] = 0;
                }
        return best;
    } else {
        int best = std::numeric_limits<int>::max();
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                if (board[i][j] == 0) {
                    board[i][j] = PLAYER;
                    best = min(best, minimax(board, depth + 1, true));
                    board[i][j] = 0;
                }
        return best;
    }
}

// Find the best move for AI
pair<int, int> findBestMove(int board[3][3]) {
    int bestVal = std::numeric_limits<int>::min();
    pair<int, int> bestMove = {-1, -1};

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == 0) {
                board[i][j] = AI;
                int moveVal = minimax(board, 0, false);
                board[i][j] = 0;

                if (moveVal > bestVal) {
                    bestMove = {i, j};
                    bestVal = moveVal;
                }
            }
    return bestMove;
}
