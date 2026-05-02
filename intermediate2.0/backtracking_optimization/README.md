# 🚀 Day 21: Backtracking Optimization (N-Queens Improved)

Welcome to **Day 21** of the C++ learning series! 🎯
Today, we improve our backtracking solutions by making them **faster and more efficient**.

---

## 📌 What You Will Learn

* Why basic backtracking is slow
* How to optimize using extra space
* Faster constraint checking
* Writing efficient recursive solutions

---

## 🧠 Problem Recap (N-Queens)

Place **N queens** on an **N × N board** such that:

* No two queens attack each other

---

## ⚠️ Problem with Basic Approach

In Day 20:

👉 We checked safety by scanning:

* Column
* Diagonals

❌ This takes **O(n)** per check

---

## 💡 Optimization Idea

👉 Instead of scanning every time
👉 Use **extra arrays to track attacks**

---

## 🧠 Key Data Structures

We use 3 arrays:

```text id="optarr"
col[n]        → tracks columns
diag1[2n-1]   → tracks (row - col)
diag2[2n-1]   → tracks (row + col)
```

---

## 🧠 Mapping Diagonals

```text id="diagmap"
Left diagonal:  row - col + (n - 1)
Right diagonal: row + col
```

---

## 🚀 Optimized Approach

👉 Check safety in **O(1)** instead of O(n)

---

## 💻 Code

```cpp id="optcode"
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

            // place queen
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
```

---

## 🖥️ Main Function

```cpp id="optmain"
int main() {
    int n = 4;

    int board[10][10] = {0};
    int col[10] = {0};
    int diag1[20] = {0};
    int diag2[20] = {0};

    solve(n, 0, col, diag1, diag2, board);

    return 0;
}
```

---

## ⚡ Complexity Improvement

| Approach  | Safety Check |
| --------- | ------------ |
| Basic     | O(n)         |
| Optimized | O(1)         |

👉 Huge performance boost 🚀

---

## 🧠 Key Insight

👉 Backtracking becomes powerful when:

* You reduce repeated work
* You store previous computations

---

## 🧩 Practice Problems

* Solve N-Queens for larger n
* Count number of solutions
* Print only one solution
* Sudoku Solver (advanced)

---

## 🎯 What You Learned

* Optimizing recursive solutions
* Using extra space for speed
* Advanced backtracking techniques
* Writing efficient algorithms

---

## 🔥 What’s Next?

➡️ Day 22: **Bit Manipulation Basics**

Enter low-level optimization and tricks 🚀

---
