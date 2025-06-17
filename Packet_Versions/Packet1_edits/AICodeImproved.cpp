#include <iostream>
#include <vector>
#include <memory>
#include <limits>
#include <cstdlib>
#include <ctime>
#include "AItest.h"

using namespace std;

const int PLAYER = 1;
const int AI = 2;


// Game tree node 
struct Node {
    int board[3][3];
    int score;
    bool isMax;
    vector<shared_ptr<Node>> children;

    Node(int b[3][3], bool maximizing) : score(0), isMax(maximizing) {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                board[i][j] = b[i][j];
    }
};

bool isMovesLeft(int board[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == 0)
                return true;
    return false;
}

int evaluate(int board[3][3]) {
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

    return 0;
}

// int minimax(shared_ptr<Node> node, int depth) {
//     int score = evaluate(node->board);
//     if (score == 10 || score == -10)
//         return score - depth;
//     if (!isMovesLeft(node->board))
//         return 0;

//     if (node->isMax) {
//         int best = numeric_limits<int>::min();
//         for (int i = 0; i < 3; i++)
//             for (int j = 0; j < 3; j++)
//                 if (node->board[i][j] == 0) {
//                     node->board[i][j] = AI;
//                     auto child = make_shared<Node>(node->board, false);
//                     node->board[i][j] = 0;
//                     node->children.push_back(child);
//                     best = max(best, minimax(child, depth + 1));
//                 }
//         node->score = best;
//         return best;
//     } else {
//         int best = numeric_limits<int>::max();
//         for (int i = 0; i < 3; i++)
//             for (int j = 0; j < 3; j++)
//                 if (node->board[i][j] == 0) {
//                     node->board[i][j] = PLAYER;
//                     auto child = make_shared<Node>(node->board, true);
//                     node->board[i][j] = 0;
//                     node->children.push_back(child);
//                     best = min(best, minimax(child, depth + 1));
//                 }
//         node->score = best;
//         return best;
//     }
// }
int minimax(shared_ptr<Node> node, int depth, int alpha, int beta) {
    int score = evaluate(node->board);

    if (score == 10 || score == -10)
        return score - depth;

    if (!isMovesLeft(node->board))
        return 0;

    if (node->isMax) {
        int best = numeric_limits<int>::min();
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (node->board[i][j] == 0) {
                    node->board[i][j] = AI;
                    auto child = make_shared<Node>(node->board, false);
                    node->board[i][j] = 0;
                    node->children.push_back(child);

                    int val = minimax(child, depth + 1, alpha, beta);
                    best = max(best, val);
                    alpha = max(alpha, best);

                    if (beta <= alpha)
                        break;
                }
            }
        }
        node->score = best;
        return best;
    } else {
        int best = numeric_limits<int>::max();
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (node->board[i][j] == 0) {
                    node->board[i][j] = PLAYER;
                    auto child = make_shared<Node>(node->board, true);
                    node->board[i][j] = 0;
                    node->children.push_back(child);

                    int val = minimax(child, depth + 1, alpha, beta);
                    best = min(best, val);
                    beta = min(beta, best);

                    if (beta <= alpha)
                        break;
                }
            }
        }
        node->score = best;
        return best;
    }
}

pair<int, int> findBestMove(int board[3][3], Difficulty level) {
    srand(time(0));
    vector<pair<int, int>> availableMoves;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == 0)
                availableMoves.push_back({i, j});

    if (level == EASY) {
        int idx = rand() % availableMoves.size();
        return availableMoves[idx];
    }

    if (level == MEDIUM) {
        if (rand() % 2 == 0) {
            int idx = rand() % availableMoves.size();
            return availableMoves[idx];
        }
    }

    int bestVal = numeric_limits<int>::min();
    pair<int, int> bestMove = {-1, -1};

    for (auto& move : availableMoves) {
        int i = move.first;
        int j = move.second;

        board[i][j] = AI;
        auto root = make_shared<Node>(board, false);
        board[i][j] = 0;

        int moveVal = minimax(root, 0, numeric_limits<int>::min(), numeric_limits<int>::max());
        if (moveVal > bestVal) {
            bestVal = moveVal;
            bestMove = move;
        }
    }

    return bestMove;
}

void printBoard(int board[3][3]) {
    cout << "\nBoard:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            char mark = '.';
            if (board[i][j] == PLAYER) mark = 'X';
            else if (board[i][j] == AI) mark = 'O';
            cout << mark << " ";
        }
        cout << "\n";
    }
}
