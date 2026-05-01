#include <iostream>
using namespace std;

bool isSafe(int board[][10], int n, int row, int col) {

    for(int i = 0; i < row; i++) {
        if(board[i][col] == 1)
            return false;
    }

    int i = row, j = col;
    while(i >= 0 && j >= 0) {
        if(board[i][j] == 1)
            return false;
        i--; j--;
    }

    i = row; j = col;
    while(i >= 0 && j < n) {
        if(board[i][j] == 1)
            return false;
        i--; j++;
    }

    return true;
}

void solve(int board[][10], int n, int row) {
    if(row == n) {
        cout << "Solution:\n";
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        return;
    }

    for(int col = 0; col < n; col++) {
        if(isSafe(board, n, row, col)) {

            board[row][col] = 1;

            solve(board, n, row + 1);

            board[row][col] = 0; // backtrack
        }
    }
}

int main() {
    int board[10][10] = {0};
    int n = 4;

    solve(board, n, 0);

    return 0;
}