# 🚀 Day 12: String Problem Solving in C++

Welcome to **Day 12** of the C++ learning series! 🎯
Today, we focus on solving **real problems using strings**, an essential skill for programming and interviews.

---

## 📌 What You Will Learn

* How to work with strings effectively
* Solving real-world problems using strings
* Using loops and conditions with strings
* Writing clean and logical solutions

---

## 🧠 Important String Concepts

Before solving problems, make sure you understand:

* `s.length()` → length of string
* `s[i]` → access characters
* `getline()` → input with spaces
* Looping through a string

---

## 🧩 Problem 1: Count Vowels

### 💡 Problem

Count the number of vowels in a string.

### 💻 Code

```cpp id="6x8t5v"
int countVowels(string s) {
    int count = 0;

    for(int i = 0; i < s.length(); i++) {
        char c = tolower(s[i]);

        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }

    return count;
}
```

---

## 🧩 Problem 2: Reverse a String

### 💡 Problem

Reverse a given string.

### 💻 Code

```cpp id="r82x0c"
string reverseString(string s) {
    string result = "";

    for(int i = s.length() - 1; i >= 0; i--) {
        result += s[i];
    }

    return result;
}
```

---

## 🧩 Problem 3: Palindrome Check

### 💡 Problem

Check if a string reads the same forward and backward.

### 💻 Code

```cpp id="v7z9kp"
bool isPalindrome(string s) {
    int start = 0;
    int end = s.length() - 1;

    while(start < end) {
        if(s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}
```

---

## 🧩 Problem 4: Count Words

### 💡 Problem

Count the number of words in a sentence.

### 💻 Code

```cpp id="j3h6qa"
int countWords(string s) {
    int count = 1;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') {
            count++;
        }
    }

    return count;
}
```

---

## 🧩 Problem 5: Convert to Uppercase

### 💡 Problem

Convert all characters in a string to uppercase.

### 💻 Code

```cpp id="y2f8dn"
string toUpperCase(string s) {
    for(int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
    }
    return s;
}
```

---

## 🧩 Practice Problems

Try solving these:

* Count consonants
* Remove spaces from string
* Count digits in string
* Find longest word
* Check anagram (advanced)

---

## 🎯 What You Learned

* How to solve real problems using strings
* How to apply loops and conditions on strings
* How to think logically while solving problems

---

## 🔥 What’s Next?

➡️ Day 13: **2D Arrays (Matrices)**

Take your problem-solving to the next level 🚀

---
