# 🚀 Day 4: Functions in C++

Welcome to **Day 4** of the C++ learning series! 🎯
Today, we move one step closer to real programming by learning about **Functions**.

---

## 📌 What You Will Learn

* What is a function?
* Why functions are important
* How to create and use functions
* Parameters and return values

---

## 🧠 What is a Function?

A **function** is a block of code that performs a specific task.

👉 Instead of writing the same code again and again, we can use functions to **reuse code**.

---

## 💡 Why Use Functions?

* ✅ Avoid code repetition
* ✅ Makes code clean and readable
* ✅ Easier to debug
* ✅ Helps in modular programming

---

## 🔧 Function Syntax

```cpp
return_type function_name(parameters) {
    // code
}
```

---

## 🧪 Example 1: Simple Function

```cpp
#include <iostream>
using namespace std;

void greet() {
    cout << "Hello, Welcome to C++!" << endl;
}

int main() {
    greet(); // function call
    return 0;
}
```

---

## 🧪 Example 2: Function with Parameters

```cpp
#include <iostream>
using namespace std;

void printSum(int a, int b) {
    cout << "Sum = " << a + b << endl;
}

int main() {
    printSum(3, 4);
    return 0;
}
```

---

## 🧪 Example 3: Function with Return Value

```cpp
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 6);
    cout << result;
    return 0;
}
```

---

## ⚡ Key Concepts

### 🔹 Function Call

Calling a function means executing it.

```cpp
greet();
```

---

### 🔹 Parameters vs Arguments

* **Parameters** → Variables in function definition
* **Arguments** → Values passed during function call

---

### 🔹 Return Keyword

The `return` keyword sends a value back to the function caller.

---

## 🧩 Practice Problems

Try solving these:

1. Create a function to print your name
2. Create a function to add two numbers
3. Create a function to check even or odd
4. Create a function to find square of a number

---

## 🎯 Summary

* Functions help in **code reusability**
* They make programs **clean and modular**
* You learned how to:

  * Define functions
  * Pass parameters
  * Return values

---

## 🔥 What’s Next?

➡️ Day 5: **Arrays in C++**

Get ready to start solving real problems! 💪

---
