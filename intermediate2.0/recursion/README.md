# 🚀 Day 18: Recursion in C++

Welcome to **Day 18** of the C++ learning series! 🎯
Today, we learn **Recursion**, a powerful technique where a function calls itself to solve problems.

---

## 📌 What You Will Learn

* What is recursion
* Base case and recursive case
* How recursion works internally
* Solving problems using recursion

---

## 🧠 What is Recursion?

Recursion is a technique where a function **calls itself** to solve smaller parts of a problem.

---

## 💡 Structure of Recursion

Every recursive function has two parts:

1. **Base Case** → stops recursion
2. **Recursive Call** → function calls itself

---

## 🧪 Example: Print Numbers (1 to n)

```cpp id="rec1"
void print(int n) {
    if(n == 0) return;

    print(n - 1);
    cout << n << " ";
}
```

---

## 🧠 How It Works

Call stack builds:

```text id="recstack"
print(3)
 → print(2)
   → print(1)
     → print(0) (base case)
```

Then prints:

```text id="recout"
1 2 3
```

---

## 🧩 Problem 1: Factorial

### 💡 Formula

```text id="factf"
n! = n × (n-1)!
```

### 💻 Code

```cpp id="factcode"
int factorial(int n) {
    if(n == 0) return 1;

    return n * factorial(n - 1);
}
```

---

## 🧩 Problem 2: Fibonacci

### 💻 Code

```cpp id="fibcode"
int fib(int n) {
    if(n <= 1) return n;

    return fib(n - 1) + fib(n - 2);
}
```

---

## 🧩 Problem 3: Sum of N Numbers

```cpp id="sumcode"
int sum(int n) {
    if(n == 0) return 0;

    return n + sum(n - 1);
}
```

---

## 🧠 Key Concepts

* Recursion uses **function call stack**
* Each call waits for smaller problem
* Base case prevents infinite recursion

---

## ⚠️ Common Mistakes

* Missing base case ❌
* Infinite recursion ❌
* Stack overflow ❌

---

## 🧩 Practice Problems

* Print numbers (reverse)
* Factorial
* Fibonacci
* Sum of digits
* Power function

---


## 🎯 What You Learned

* Recursive thinking
* Breaking problems into smaller parts
* Understanding function calls

---

## 🔥 What’s Next?

➡️ Day 19: **Recursion + Backtracking Basics**

Step into advanced problem solving 🚀

---
