# 🚀 Day 10: Bubble Sort in C++ (Sorting Basics)

Welcome to **Day 10** of the C++ learning series! 🎯
Today, we begin our journey into **sorting algorithms** with one of the simplest methods — **Bubble Sort**.

---

## 📌 What You Will Learn

* Why sorting is important
* How Bubble Sort works
* Understanding nested loops in sorting
* Optimizing Bubble Sort

---

## 🧠 What is Sorting?

Sorting means arranging elements in a specific order.

👉 Example:

Unsorted:

```
5 2 4 1 3
```

Sorted (Ascending):

```
1 2 3 4 5
```

---

## 💡 Bubble Sort Idea

Bubble Sort repeatedly:

* Compares **adjacent elements**
* Swaps them if they are in the wrong order

👉 The largest element “bubbles up” to the end after each pass.

---

## 🔄 How It Works

Example:

```
5 2 4 1 3
↓
2 5 4 1 3
↓
2 4 5 1 3
↓
2 4 1 5 3
↓
2 4 1 3 5
```

👉 After first pass, the largest element (5) is at the correct position.

---

## 🔁 Number of Passes

For `n` elements:

* Total passes = `n - 1`

---

## 🔧 Algorithm

```cpp
for(int i = 0; i < n - 1; i++) {
    for(int j = 0; j < n - i - 1; j++) {
        if(arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
        }
    }
}
```

## ⚡ Optimized Bubble Sort

👉 Stop early if array is already sorted.

```cpp id="b3g7hy"
for(int i = 0; i < n - 1; i++) {
    bool swapped = false;

    for(int j = 0; j < n - i - 1; j++) {
        if(arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
            swapped = true;
        }
    }

    if(!swapped) break;
}
```

---

## 🧩 Practice Problems

Try solving these:

* Sort an array in ascending order
* Sort an array in descending order
* Count number of swaps
* Print array after each pass

---

## 🎯 What You Learned

* Basics of sorting algorithms
* How Bubble Sort works step-by-step
* Use of nested loops for comparisons
* Basic optimization technique

---

## 🔥 What’s Next?

➡️ Day 11: **Selection Sort in C++**

Compare sorting techniques and improve efficiency 🚀

---
