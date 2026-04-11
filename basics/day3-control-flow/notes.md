# 📘 Day 3: Control Flow & Logical Thinking (C++)

## 🚀 Overview

Welcome to **Day 3** of the C++ learning series!
Today, we move beyond basic syntax and start building **real logical thinking** using control flow statements.

This is one of the most important steps in programming — learning how to make decisions and control the flow of execution.

---

## 🎯 Learning Objectives

By the end of this day, you should be able to:

* Use `if`, `else`, and `nested if` statements
* Understand and apply `switch` cases
* Write programs using loops (`for`, `while`, `do-while`)
* Approach basic problems with a structured thinking process

---

## 📚 Topics Covered

### 1️⃣ Decision Making (if / else)

```cpp
#include <iostream>
using namespace std;

int main() {
    int marks;
    cin >> marks;

    if (marks >= 40) {
        cout << "Pass";
    } else {
        cout << "Fail";
    }
}
```

---

### 2️⃣ Nested if

```cpp
if (marks >= 40) {
    if (marks >= 75) {
        cout << "Distinction";
    } else {
        cout << "Pass";
    }
} else {
    cout << "Fail";
}
```

---

### 3️⃣ Switch Case

```cpp
int day;
cin >> day;

switch(day) {
    case 1: cout << "Monday"; break;
    case 2: cout << "Tuesday"; break;
    default: cout << "Invalid";
}
```

---

### 4️⃣ Loops

#### 🔁 for loop

```cpp
for(int i = 1; i <= 5; i++) {
    cout << i << " ";
}
```

#### 🔁 while loop

```cpp
int i = 1;
while(i <= 5) {
    cout << i << " ";
    i++;
}
```

#### 🔁 do-while loop

```cpp
int i = 1;
do {
    cout << i << " ";
    i++;
} while(i <= 5);
```

---

## 🧠 Problem Solving Approach

Before writing code, always follow:

1. Understand the input
2. Understand the expected output
3. Break the problem into simple steps
4. Convert logic into code

---

## 💻 Practice Problems

### 🟢 Beginner

* Print numbers from 1 to N
* Check if a number is even or odd
* Find sum of first N numbers

### 🟡 Intermediate

* Find largest of 3 numbers
* Print multiplication table
* Count digits in a number

### 🔴 Challenge

* Reverse a number
* Check palindrome number
* Sum of digits

---

## 📝 Assignment

Write a program that:

* Takes a number as input
* Checks if it is even or odd
* Checks if it is positive or negative
* Prints the reverse of the number

---


## 💡 Key Takeaway

Control flow is the foundation of programming logic.
Mastering this will help you solve real-world problems efficiently.

---

## 🔜 Next Topic

👉 **Day 4: Functions & Modular Programming**

---

Happy Coding! 🚀
