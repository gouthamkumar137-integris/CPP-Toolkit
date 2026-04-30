# 🚀 Day 6: Strings in C++

Welcome to **Day 6** of the C++ learning series! 🎯
Today, we learn how to work with **Strings (text data)** in C++.

---

## 📌 What You Will Learn

* What is a string?
* How to declare and use strings
* Taking input (with and without spaces)
* Basic string operations
* Solving problems using strings

---

## 🧠 What is a String?

A **string** is a sequence of characters.

👉 Example:

* "Hello"
* "Gowtham"
* "C++ Programming"

---

## 💡 Why Strings Matter?

* ✅ Used for names, sentences, passwords
* ✅ Real-world applications
* ✅ Important for problem solving

---

## 🔧 Declaration

```cpp
#include <string>

string name = "Gowtham";
```

---

## 🧪 Taking Input

### 1️⃣ Without Space

```cpp
string name;
cin >> name;
```

👉 Input: `Gowtham` ✅
👉 Input: `Gowtham Gowtham` ❌ (only first word taken)

---

### 2️⃣ With Space (IMPORTANT)

```cpp
string name;
getline(cin, name);
```

👉 Input: `Gowtham Gowtham` ✅

---

## 🔄 Traversing a String

```cpp
#include <iostream>
using namespace std;

int main() {
    string s = "hello";

    for(int i = 0; i < s.length(); i++) {
        cout << s[i] << " ";
    }

    return 0;
}
```

---

## ⚡ Important Operations

### 🔹 Length of String

```cpp
cout << s.length();
```

---

### 🔹 Access Characters

```cpp
cout << s[0]; // first character
```

---

### 🔹 Modify Character

```cpp
s[0] = 'H';
```

---

## 🧪 Example Program

```cpp
#include <iostream>
using namespace std;

int main() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello, " << name << endl;
    cout << "Length: " << name.length();

    return 0;
}
```

---

## 🧩 Practice Problems

Try solving these:

1. Print each character of a string
2. Count number of vowels
3. Count number of uppercase letters
4. Reverse a string
5. Check if a string is palindrome

---

## 📁 Folder Structure

```cpp
day6-strings/
│── README.md
│── examples.cpp

```
---

## 🎯 Summary

* Strings store text (characters)
* Use `getline()` for full input
* Can access characters using index
* Strings are heavily used in real-world programs

---

## 🔥 What’s Next?

➡️ Day 7: **Patterns (Loops Practice)**

This will strengthen your logic and looping skills 💪

---
