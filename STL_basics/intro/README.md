# 🚀 Day 25: STL Basics in C++

Welcome to **Day 25** of the C++ learning series! 🎯
Today, we begin learning the **Standard Template Library (STL)** — one of the most powerful features in C++.

STL helps us write:

* Cleaner code
* Faster programs
* Efficient solutions

---

# 📌 What You Will Learn

* What is STL
* Vectors
* Pairs
* Iterators
* Useful STL functions

---

# 🧠 What is STL?

STL stands for:

👉 **Standard Template Library**

It provides ready-made:

* Data structures
* Algorithms
* Iterators

---

# 🚀 Why STL is Important

Without STL:

```cpp id="stlr1"
int arr[100];
```

With STL:

```cpp id="stlr2"
vector<int> v;
```

👉 Dynamic size
👉 Easier operations
👉 Cleaner syntax

---

# 📦 1️⃣ Vector

A vector is a dynamic array.

---

## 💻 Declaration

```cpp id="stlr3"
vector<int> v;
```

---

## ➕ Insert Elements

```cpp id="stlr4"
v.push_back(10);
v.push_back(20);
v.push_back(30);
```

---

## 📖 Access Elements

```cpp id="stlr5"
cout << v[0];
cout << v.at(1);
```

---

## ❌ Remove Last Element

```cpp id="stlr6"
v.pop_back();
```

---

## 📏 Size of Vector

```cpp id="stlr7"
cout << v.size();
```

---

# 📊 Vector Visualization

```text id="stlr8"
Initial:
[10 20 30]

push_back(40)

Updated:
[10 20 30 40]
```

---

# 👥 2️⃣ Pair

Pair stores two values together.

---

## 💻 Declaration

```cpp id="stlr9"
pair<int, string> p;
```

---

## 💻 Example

```cpp id="stlr10"
p = {1, "Gowtham"};

cout << p.first;
cout << p.second;
```

---

# 🔁 3️⃣ Iterators

Iterators help traverse containers.

---

## 💻 Example

```cpp id="stlr11"
vector<int>::iterator it;

for(it = v.begin(); it != v.end(); it++) {
    cout << *it << " ";
}
```

---

# 🧠 Auto Keyword

```cpp id="stlr12"
for(auto x : v) {
    cout << x << " ";
}
```

👉 Modern and cleaner syntax

---

# 🧩 Useful Vector Functions

| Function    | Purpose        |
| ----------- | -------------- |
| push_back() | Add element    |
| pop_back()  | Remove last    |
| size()      | Total elements |
| empty()     | Check if empty |
| clear()     | Remove all     |
| front()     | First element  |
| back()      | Last element   |

---

# ⚠️ Common Mistakes

* Accessing invalid index ❌
* Forgetting STL headers ❌
* Misusing iterators ❌

---

# 🧩 Practice Problems

* Store marks using vector
* Reverse vector
* Sum all vector elements
* Store student data using pair

---

# 🎯 What You Learned

* STL basics
* Dynamic arrays using vector
* Storing pairs of values
* Iterating through containers

---

# 🔥 What’s Next?

➡️ Day 26: **STL Algorithms & Sorting**

Learn powerful built-in algorithms 🚀

---
