# 🚀 1D Arrays in C++ (Complete Guide)

Welcome to the **1D Arrays Module** 🎯
This is one of the most important concepts in programming and forms the base for **Data Structures & Algorithms (DSA)**.

---

## 📌 What You Will Learn

* What is a 1D array
* How to declare and initialize arrays
* How to take input and print arrays
* Traversing arrays using loops
* Solving real problems using arrays

---

## 🧠 What is a 1D Array?

A **1D Array** is a collection of elements of the same type stored in **continuous memory locations**.

👉 Example:

```id="arr1"
10 20 30 40 50
```

👉 Each element is accessed using an **index**:

| Index | Value |
| ----- | ----- |
| 0     | 10    |
| 1     | 20    |
| 2     | 30    |
| 3     | 40    |
| 4     | 50    |

---

## 🔧 Declaration

```cpp id="arr2"
int arr[5];
```

👉 Creates an array of size 5

---

## 🧪 Initialization

```cpp id="arr3"
int arr[5] = {10, 20, 30, 40, 50};
```

---

## 🔄 Traversal (Very Important)

```cpp id="arr4"
for(int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
}
```

👉 This is the **most important pattern** in arrays.

---

## 🧪 Taking Input

```cpp id="arr5"
int arr[5];

for(int i = 0; i < 5; i++) {
    cin >> arr[i];
}
```

---

## 🧩 Common Problems

---

### 🔹 Sum of Array

```cpp id="arr6"
int sum = 0;

for(int i = 0; i < n; i++) {
    sum += arr[i];
}
```

---

### 🔹 Find Maximum Element

```cpp id="arr7"
int max = arr[0];

for(int i = 1; i < n; i++) {
    if(arr[i] > max) {
        max = arr[i];
    }
}
```

---

### 🔹 Count Even Numbers

```cpp id="arr8"
int count = 0;

for(int i = 0; i < n; i++) {
    if(arr[i] % 2 == 0) {
        count++;
    }
}
```

---

### 🔹 Reverse an Array

```cpp id="arr9"
int start = 0, end = n - 1;

while(start < end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
}
```

---

### 🔹 Linear Search

```cpp id="arr10"
for(int i = 0; i < n; i++) {
    if(arr[i] == key) {
        return i;
    }
}
return -1;
```

---

## 🧠 Key Concepts to Remember

* Index starts from **0**
* Array size is **fixed**
* Elements are stored **contiguously**
* Access time is **fast (O(1))**

---

## ⚠️ Common Mistakes

* Accessing out of bounds (`arr[5]` in size 5) ❌
* Forgetting loop limits ❌
* Not initializing variables ❌

---

## 🧩 Practice Problems

Try solving these:

* Find minimum element
* Count odd numbers
* Find second largest element
* Reverse array
* Search element

---

## 🎯 What You Learned

* Basics of arrays
* Looping and traversal
* Problem-solving using arrays
* Foundation for advanced DSA

---

## 🔥 Why This Matters

Arrays are used in:

* Searching algorithms
* Sorting algorithms
* Data processing
* Competitive programming

👉 Strong array knowledge = strong coding foundation

---

## 🚀 What’s Next?

➡️ Move to:

* **2D Arrays (Matrices)**
* **Sorting Algorithms**
* **Searching Techniques**

---
