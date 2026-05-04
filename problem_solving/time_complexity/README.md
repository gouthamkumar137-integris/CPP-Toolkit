# 🚀 Day 23: Time Complexity & Big-O in C++

Welcome to **Day 23** of the C++ learning series! 🎯
Today, we learn how to measure the **efficiency of algorithms** using **Time Complexity and Big-O notation**.

---

## 📌 What You Will Learn

* What is Time Complexity
* Why it matters
* Big-O notation
* Common complexity types
* Analyzing loops and code

---

## 🧠 What is Time Complexity?

Time Complexity tells us:

👉 How fast an algorithm runs
👉 How performance grows with input size

---

## 💡 Why It Matters

Two codes can give the same output…

👉 But one can be **1000x faster**

---

## ⚙️ Big-O Notation

Big-O represents the **worst-case time complexity**.

---

## 📊 Common Complexities

| Complexity | Meaning           | Example              |
| ---------- | ----------------- | -------------------- |
| O(1)       | Constant          | Access array element |
| O(log n)   | Logarithmic       | Binary Search        |
| O(n)       | Linear            | Loop                 |
| O(n log n) | Efficient sorting | Merge Sort           |
| O(n²)      | Nested loops      | Bubble Sort          |
| O(2ⁿ)      | Exponential       | Recursion (subsets)  |

---

## 🔍 Examples

### O(1) — Constant Time

```cpp id="tc1"
int x = arr[0];
```

---

### O(n) — Linear Time

```cpp id="tc2"
for(int i = 0; i < n; i++) {
    cout << arr[i];
}
```

---

### O(n²) — Quadratic Time

```cpp id="tc3"
for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
        cout << i << j;
    }
}
```

---

### O(log n) — Binary Search

```cpp id="tc4"
while(start <= end) {
    int mid = (start + end) / 2;
}
```

---

## 🧠 Rules to Remember

* Drop constants → O(2n) = O(n)
* Keep highest power → O(n² + n) = O(n²)
* Ignore lower terms

---

## 🧩 Problem 1: Count Operations

```cpp id="tcprob1"
for(int i = 0; i < n; i++) {
    cout << i;
}
```

👉 Time Complexity = **O(n)**

---

## 🧩 Problem 2: Nested Loop

```cpp id="tcprob2"
for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
        cout << i << j;
    }
}
```

👉 Time Complexity = **O(n²)**

---

## 🧠 Space Complexity (Bonus)

Space Complexity measures:
👉 Memory used by algorithm

---

## ⚠️ Common Mistakes

* Counting exact steps ❌
* Ignoring worst case ❌
* Confusing log n and n ❌

---

## 🧩 Practice Problems

* Identify complexity of loops
* Compare two algorithms
* Optimize O(n²) to O(n log n)
* Analyze recursion complexity

---

## 🎯 What You Learned

* Measuring efficiency
* Understanding algorithm performance
* Writing optimized code
* Thinking beyond correctness

---

## 🔥 What’s Next?

➡️ Day 24: **Space Complexity & Optimization Techniques**

Learn how to write memory-efficient programs 🚀

---
