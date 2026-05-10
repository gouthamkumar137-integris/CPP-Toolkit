# 🚀 Day 24: Space Complexity & Optimization in C++

Welcome to **Day 24** of the C++ learning series! 🎯
Today, we learn how algorithms use **memory** and how to optimize programs using **Space Complexity** concepts.

---

## 📌 What You Will Learn

* What is Space Complexity
* Auxiliary space
* Memory usage in algorithms
* Space optimization techniques
* Tradeoff between time and space

---

## 🧠 What is Space Complexity?

Space Complexity tells us:

👉 How much memory an algorithm uses as input size grows.

---

## 💡 Types of Space Used

### 1️⃣ Input Space

Memory used to store input data.

### 2️⃣ Auxiliary Space

Extra memory used by algorithm.

---

## ⚡ Example: O(1) Space

```cpp id="sp1"
int sum = 0;

for(int i = 0; i < n; i++) {
    sum += arr[i];
}
```

👉 Only one extra variable used
👉 Space Complexity = **O(1)**

---

## 📈 Example: O(n) Space

```cpp id="sp2"
int temp[n];

for(int i = 0; i < n; i++) {
    temp[i] = arr[i];
}
```

👉 Extra array used
👉 Space Complexity = **O(n)**

---

## 🔥 Recursion & Stack Space

Every recursive call uses memory in the call stack.

---

### Example

```cpp id="sp3"
void print(int n) {
    if(n == 0) return;

    print(n - 1);
}
```

👉 Recursive depth = n
👉 Space Complexity = **O(n)**

---

## 🧠 Common Space Complexities

| Complexity | Meaning            |
| ---------- | ------------------ |
| O(1)       | Constant memory    |
| O(log n)   | Recursive divide   |
| O(n)       | Linear extra space |
| O(n²)      | Matrix / DP tables |

---

## ⚖️ Time vs Space Tradeoff

Sometimes:

* Faster algorithms use more memory
* Memory-efficient algorithms may be slower

---

## 🧩 Example: Frequency Count

### Using Extra Space

```cpp id="sp4"
unordered_map<int, int> freq;
```

👉 Faster lookup
👉 Extra memory used

---

## 🧩 Example: Two Sum

### Brute Force

```cpp id="sp5"
Nested loops
```

* Time → O(n²)
* Space → O(1)

---

### Optimized

```cpp id="sp6"
unordered_map<int, int> mp;
```

* Time → O(n)
* Space → O(n)

---

## 🧠 Optimization Techniques

* Use variables instead of arrays when possible
* Avoid unnecessary copies
* Use iterative instead of recursive when needed
* Reuse existing memory

---

## ⚠️ Common Mistakes

* Ignoring recursion stack ❌
* Using extra arrays unnecessarily ❌
* Confusing input space with auxiliary space ❌

---

## 🧩 Practice Problems

* Reverse array in-place
* Fibonacci (recursive vs iterative)
* Two Sum optimization
* Matrix transpose in-place

---

## 📊 Space Complexity Comparison

| Algorithm     | Time       | Space          |
| ------------- | ---------- | -------------- |
| Bubble Sort   | O(n²)      | O(1)           |
| Merge Sort    | O(n log n) | O(n)           |
| Binary Search | O(log n)   | O(1) iterative |

---

---

## 🎯 What You Learned

* Measuring memory usage
* Auxiliary space
* Recursion stack memory
* Time vs space optimization

---

## 🔥 What’s Next?

➡️ Day 25: **STL Basics (Vectors, Pairs, Iterators)**

Start writing cleaner and faster C++ code 🚀

---
