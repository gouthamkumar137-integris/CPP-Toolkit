# 🚀 Day 13: 2D Arrays in C++ (Matrices)

Welcome to **Day 13** of the C++ learning series! 🎯
Today, we learn about **2D Arrays**, also known as **Matrices**, which allow us to store data in rows and columns.

---

## 📌 What You Will Learn

* What is a 2D array
* How to declare and initialize a matrix
* How to take input and print a matrix
* Row-wise and column-wise traversal
* Solving basic matrix problems

---

## 🧠 What is a 2D Array?

A **2D array** is a collection of elements arranged in a **table format** (rows and columns).

👉 Example:

```id="a1b2c3"
1 2 3
4 5 6
7 8 9
```

* Rows → Horizontal
* Columns → Vertical

---

## 🔧 Declaration

```cpp id="z9x8c7"
int arr[3][3];
```

👉 Creates a 3 × 3 matrix

---

## 🧪 Initialization

```cpp id="m4n5b6"
int arr[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
```

---

## 🔄 Traversal (Very Important)

```cpp id="t7y8u9"
for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
        cout << arr[i][j] << " ";
    }
    cout << endl;
}
```

👉 Outer loop → rows
👉 Inner loop → columns

---

## 🧪 Taking Input

```cpp id="k1l2m3"
int arr[3][3];

for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
        cin >> arr[i][j];
    }
}
```

---

## 🧩 Basic Problems

### 🔹 Sum of All Elements

```cpp id="p4q5r6"
int sum = 0;

for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
        sum += arr[i][j];
    }
}
```

---

### 🔹 Row-wise Sum

```cpp id="s7t8u9"
for(int i = 0; i < 3; i++) {
    int sum = 0;

    for(int j = 0; j < 3; j++) {
        sum += arr[i][j];
    }

    cout << "Row " << i << " sum: " << sum << endl;
}
```

---

### 🔹 Column-wise Sum

```cpp id="v1w2x3"
for(int j = 0; j < 3; j++) {
    int sum = 0;

    for(int i = 0; i < 3; i++) {
        sum += arr[i][j];
    }

    cout << "Column " << j << " sum: " << sum << endl;
}
```

---

### 🔹 Diagonal Sum

```cpp id="y4z5a6"
int sum = 0;

for(int i = 0; i < 3; i++) {
    sum += arr[i][i];
}
```

---

### 🔹 Search in Matrix

```cpp id="b7c8d9"
int key = 5;
bool found = false;

for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
        if(arr[i][j] == key) {
            found = true;
        }
    }
}
```

---

## 🎯 What You Learned

* How to use 2D arrays (matrices)
* How to traverse rows and columns
* How to solve basic matrix problems
* Importance of nested loops

---

## 🔥 What’s Next?

➡️ Day 14: **Advanced Matrix Problems (Spiral, Transpose, etc.)**

Take your problem-solving to the next level 🚀

---
