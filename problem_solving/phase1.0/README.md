# 🚀 Day 9: Problem Solving with Arrays & Functions

Welcome to **Day 9** of the C++ learning series! 🎯
Today marks the beginning of **real problem solving** using the concepts you’ve learned so far.

---

## 📌 What You Will Learn

* How to approach coding problems
* Combining **arrays + functions + loops**
* Writing clean and logical code
* Solving common beginner-level problems

---

## 🧠 Problem Solving Approach

Before writing any code, always follow these steps:

1. **Understand the problem**

   * What is given?
   * What is required?

2. **Plan the solution**

   * Which concepts to use? (arrays, loops, conditions)

3. **Write the logic**

   * Step-by-step thinking preffered to do first in paper then go for code.

4. **Implement in code**

---
### Note: if u stuck in between then don't seed solution preffered to get some hints first.

## 🧩 Problem 1: Sum of Array

### 💡 Problem

Find the sum of all elements in an array.
Example input : arr=[1,3,4,5,6]
Expected output: 19

### 💻 Code

```cpp
int sumArray(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
```

---

## 🧩 Problem 2: Find Maximum Element

### 💡 Problem

Find the largest element in an array.
Example input : arr=[10,5,8,12,7]
Expected output: 12
### 💻 Code

```cpp
int findMax(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
```

---

## 🧩 Problem 3: Count Even Numbers

### 💡 Problem

Count how many elements are even.
Example input : arr=[13,27,30,45]
Expected output: 1

### 💻 Code

```cpp
int countEven(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}
```

---

## 🧩 Problem 4: Reverse an Array

### 💡 Problem

Reverse the elements of an array.
Example input : arr=[10,20,30,40]
Expected output: [40,30,20,10]

### 💻 Code

```cpp
void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1;

    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
```

---

## 🧩 Problem 5: Linear Search

### 💡 Problem

Search for an element in an array.
Example input : arr=[10,20,30,40]
key=30
return the index of the key element 
Expected output:3

### 💻 Code

```cpp
int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}
```

---

## 🧩 Practice Problems

Try solving these:

* Find sum of array
* Find maximum element
* Count odd numbers
* Reverse an array
* Search for an element

---

## 🎯 What You Learned

* How to solve problems step-by-step
* How to combine arrays and functions
* How to think logically before coding

---

## 🔥 What’s Next?

➡️ Day 10: **Sorting Basics (Bubble Sort)**

Start your journey into Data Structures & Algorithms 🚀

---
