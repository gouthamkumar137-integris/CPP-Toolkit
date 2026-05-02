#include <iostream>
using namespace std;

void solve(int n, int row, int col[], int diag1[], int diag2[], int board[][10]) {

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

    for(int c = 0; c < n; c++) {

        if(col[c] == 0 && diag1[row - c + n - 1] == 0 && diag2[row + c] == 0) {

            // place
            board[row][c] = 1;
            col[c] = 1;
            diag1[row - c + n - 1] = 1;
            diag2[row + c] = 1;

            solve(n, row + 1, col, diag1, diag2, board);

            // backtrack
            board[row][c] = 0;
            col[c] = 0;
            diag1[row - c + n - 1] = 0;
            diag2[row + c] = 0;
        }
    }
}

int main() {
    int n = 4;

    int board[10][10] = {0};
    int col[10] = {0};
    int diag1[20] = {0};
    int diag2[20] = {0};

    solve(n, 0, col, diag1, diag2, board);

    return 0;
}