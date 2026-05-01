# 🚀 Day 20: N-Queens Problem (Backtracking)

Welcome to **Day 20** of the C++ learning series! 🎯
Today, we solve a classic and important backtracking problem: **N-Queens**.

---

## 📌 What You Will Learn

* Applying backtracking to real problems
* Understanding constraints
* Placing elements with conditions
* Building valid configurations

---

## 🧠 Problem Statement

Place **N queens** on an **N × N chessboard** such that:

* No two queens attack each other

---

## ⚠️ Rules

A queen can attack:

* Same row
* Same column
* Diagonals

---

## 🧪 Example (4-Queens)

```id="nq1"
One valid solution:

. Q . .
. . . Q
Q . . .
. . Q .
```

---

## 💡 Core Idea

👉 Try placing a queen in each row
👉 Check if it's safe
👉 Move to next row
👉 If not safe → try next column
👉 If stuck → backtrack

---

## 🔁 Backtracking Pattern

```cpp id="nqpattern"
for(each column) {
    if(isSafe) {
        place queen;

        solve(next row);

        remove queen;  // backtrack
    }
}
```

---

## 🧠 Safety Check

A position is safe if:

* No queen in same column
* No queen in left diagonal
* No queen in right diagonal

---

## 💻 Code

```cpp id="nqcode"
#include <iostream>
using namespace std;

bool isSafe(int board[][10], int n, int row, int col) {

    // Check column
    for(int i = 0; i < row; i++) {
        if(board[i][col] == 1)
            return false;
    }

    // Check left diagonal
    int i = row, j = col;
    while(i >= 0 && j >= 0) {
        if(board[i][j] == 1)
            return false;
        i--; j--;
    }

    // Check right diagonal
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
        // print solution
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

            board[row][col] = 1; // place

            solve(board, n, row + 1);

            board[row][col] = 0; // backtrack
        }
    }
}
```

---

## 🖥️ Main Function

```cpp id="nqmain"
int main() {
    int board[10][10] = {0};
    int n = 4;

    solve(board, n, 0);

    return 0;
}
```

---

## 🧠 Key Insight

👉 We don’t try random placements

👉 We:

* Place row by row
* Validate each step
* Undo if invalid

---

## 🧩 Practice Ideas

* Count total solutions
* Print only one solution
* Solve for N = 5, 6

---
## 🎯 What You Learned

* Real backtracking problem
* Constraint checking
* Recursive exploration
* State management

---

## 🔥 What’s Next?

➡️ Day 21: **Backtracking Optimization & Problems**

Move towards faster and smarter solutions 🚀

---
