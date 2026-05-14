# 🚀 Day 26: STL Algorithms & Sorting in C++

Welcome to **Day 26** of the C++ learning series! 🎯
Today, we learn powerful built-in STL algorithms that make C++ extremely efficient and clean.

These algorithms are widely used in:

* Competitive Programming
* Interviews
* Real software engineering

---

# 📌 What You Will Learn

* STL algorithms
* Sorting using `sort()`
* Searching using `binary_search()`
* Reversing containers
* Finding maximum and minimum elements

---

# 🧠 What are STL Algorithms?

C++ provides built-in algorithms inside:

```cpp id="alg1"
#include <algorithm>
```

These algorithms help:

* Reduce code
* Improve readability
* Increase efficiency

---

# 🚀 1️⃣ Sorting using `sort()`

## 💻 Example

```cpp id="alg2"
sort(v.begin(), v.end());
```

👉 Sorts vector in ascending order

---

# 📊 Visual Flow

```text id="alg3"
Before:
[5 2 9 1]

After sort():
[1 2 5 9]
```

---

# 🔥 Descending Order

```cpp id="alg4"
sort(v.begin(), v.end(), greater<int>());
```

---

# 🔍 2️⃣ Binary Search

Search efficiently in sorted data.

---

## 💻 Example

```cpp id="alg5"
binary_search(v.begin(), v.end(), 5);
```

👉 Returns:

* `1` → found
* `0` → not found

---

# 🔄 3️⃣ Reverse Elements

## 💻 Example

```cpp id="alg6"
reverse(v.begin(), v.end());
```

---

# 📊 Visual Flow

```text id="alg7"
Before:
[1 2 3 4]

After reverse():
[4 3 2 1]
```

---

# 📈 4️⃣ Maximum & Minimum

## 💻 Maximum Element

```cpp id="alg8"
*max_element(v.begin(), v.end());
```

---

## 💻 Minimum Element

```cpp id="alg9"
*min_element(v.begin(), v.end());
```

---

# 🔢 5️⃣ Count Occurrences

## 💻 Example

```cpp id="alg10"
count(v.begin(), v.end(), 5);
```

👉 Counts how many times `5` appears

---

# 🧠 Time Complexities

| Algorithm       | Complexity |
| --------------- | ---------- |
| sort()          | O(n log n) |
| binary_search() | O(log n)   |
| reverse()       | O(n)       |
| max_element()   | O(n)       |

---

# ⚠️ Common Mistakes

* Using binary search on unsorted data ❌
* Forgetting `<algorithm>` header ❌
* Misusing iterators ❌

---

# 🧩 Practice Problems

* Sort marks
* Reverse vector
* Find maximum number
* Search target using binary search

---
# 🎯 What You Learned

* Using built-in STL algorithms
* Sorting efficiently
* Searching in logarithmic time
* Writing cleaner C++ code

---

# 🔥 What’s Next?

➡️ Day 27: **STL Containers (Set, Map, Queue, Stack)**

Start mastering advanced STL containers 🚀

---
