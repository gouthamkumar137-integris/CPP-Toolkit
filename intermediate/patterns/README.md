# 🚀 Day 8: Patterns in C++ (Logic Building)

Welcome to **Day 8** of the C++ learning series! 🎯
Today, we focus on **Patterns**, one of the best ways to improve your **logic and loop understanding**.

---

## 📌 What You Will Learn

* How to use **nested loops**
* How to break down pattern problems
* How to build logic step-by-step
* Different types of patterns

---

## 🧠 Core Idea

Patterns are nothing but **loops printing in a structured way**.

👉 Every pattern depends on:

* Rows → Outer loop
* Columns → Inner loop

---

## 🔑 Golden Rules for Patterns

Before writing code, always ask:

1. How many rows are there?
2. How many columns in each row?
3. What should be printed?

---

## 🧩 Pattern 1: Square Pattern

```
* * * *
* * * *
* * * *
* * * *
```

### 💡 Logic

* Rows = 4
* Columns = 4
* Print `*`

### 💻 Code

```cpp
for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4; j++) {
        cout << "* ";
    }
    cout << endl;
}
```

---

## 🧩 Pattern 2: Right Triangle

```
*
* *
* * *
* * * *
```

### 💡 Logic

* Row number decides number of stars

### 💻 Code

```cpp
for(int i = 1; i <= 4; i++) {
    for(int j = 1; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
}
```

---

## 🧩 Pattern 3: Number Triangle

```
1
1 2
1 2 3
1 2 3 4
```

### 💡 Logic

* Print numbers from 1 to current row

### 💻 Code

```cpp
for(int i = 1; i <= 4; i++) {
    for(int j = 1; j <= i; j++) {
        cout << j << " ";
    }
    cout << endl;
}
```

---

## 🧩 Pattern 4: Reverse Triangle

```
* * * *
* * *
* *
*
```

### 💡 Logic

* Decreasing number of stars each row

### 💻 Code

```cpp
for(int i = 4; i >= 1; i--) {
    for(int j = 1; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
}
```

---

## 🧩 Pattern 5: Pyramid Pattern

```
   *
  * *
 * * *
* * * *
```

### 💡 Logic

* Spaces decrease each row
* Stars increase each row

### 💻 Code

```cpp
for(int i = 1; i <= 4; i++) {

    // spaces
    for(int j = 1; j <= 4 - i; j++) {
        cout << " ";
    }

    // stars
    for(int j = 1; j <= i; j++) {
        cout << "* ";
    }

    cout << endl;
}
```

---

## 🧩 Practice Problems

Try solving these on your own:

* Square pattern
* Triangle pattern
* Reverse triangle
* Number triangle
* Pyramid pattern

👉 Focus on **logic before code**

---

## 🎯 What You Learned

* Nested loops are used to build patterns
* Patterns improve logical thinking
* Breaking problems into steps makes coding easier

---

## 🔥 What’s Next?

➡️ Day 9: **Functions + Arrays Combined Problems**

Start solving real coding problems! 🚀

---

