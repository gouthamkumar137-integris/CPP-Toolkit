# 🚀 Day 14: Advanced Matrix Problems in C++

Welcome to **Day 14** of the C++ learning series! 🎯
Today, we explore **advanced matrix problems** to strengthen your logic and problem-solving skills.

---

## 📌 What You Will Learn

* Matrix transformations
* Advanced traversal techniques
* Solving real matrix problems
* Improving nested loop logic

---

## 🧠 Key Concepts

* Row and column traversal
* Boundary control (top, bottom, left, right)
* Matrix manipulation

---

## 🧩 Problem 1: Transpose of Matrix

### 💡 Problem

Convert rows into columns.

### 🧪 Example

```
1 2 3
4 5 6
7 8 9
```

👉 Transpose:

```
1 4 7
2 5 8
3 6 9
```

### 💻 Code

```cpp id="t1a2b3"
for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
        cout << arr[j][i] << " ";
    }
    cout << endl;
}
```

---

## 🧩 Problem 2: Diagonal Traversal

### 💡 Problem

Print the main diagonal elements.

### 💻 Code

```cpp id="d4e5f6"
for(int i = 0; i < 3; i++) {
    cout << arr[i][i] << " ";
}
```

---

## 🧩 Problem 3: Reverse Each Row

### 💡 Problem

Reverse elements of each row.

### 💻 Code

```cpp id="g7h8i9"
for(int i = 0; i < 3; i++) {
    int start = 0, end = 2;

    while(start < end) {
        swap(arr[i][start], arr[i][end]);
        start++;
        end--;
    }
}
```

---

## 🧩 Problem 4: Spiral Traversal (Important 🔥)

### 💡 Problem

Print matrix in spiral order.

### 🧪 Example Output

```
1 2 3 6 9 8 7 4 5
```

### 💻 Code

```cpp id="j1k2l3"
int top = 0, bottom = 2;
int left = 0, right = 2;

while(top <= bottom && left <= right) {

    // top row
    for(int i = left; i <= right; i++)
        cout << arr[top][i] << " ";
    top++;

    // right column
    for(int i = top; i <= bottom; i++)
        cout << arr[i][right] << " ";
    right--;

    // bottom row
    for(int i = right; i >= left; i--)
        cout << arr[bottom][i] << " ";
    bottom--;

    // left column
    for(int i = bottom; i >= top; i--)
        cout << arr[i][left] << " ";
    left++;
}
```

---

## 🧩 Problem 5: Row with Maximum Sum

### 💡 Problem

Find the row with the maximum sum.

### 💻 Code

```cpp id="m4n5o6"
int maxSum = 0, rowIndex = 0;

for(int i = 0; i < 3; i++) {
    int sum = 0;

    for(int j = 0; j < 3; j++) {
        sum += arr[i][j];
    }

    if(sum > maxSum) {
        maxSum = sum;
        rowIndex = i;
    }
}
```

---

## 🧩 Practice Problems

Try solving these:

* Transpose a matrix
* Reverse rows of matrix
* Print diagonal elements
* Spiral traversal
* Find row with maximum sum

---

## 🎯 What You Learned

* Advanced matrix traversal techniques
* Handling boundaries in loops
* Writing efficient nested loop logic
* Solving real-world matrix problems

---

## 🔥 What’s Next?

➡️ Day 15: **Binary Search (Efficient Searching Algorithm)**

Step into faster and smarter algorithms 🚀

---
