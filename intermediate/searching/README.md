# 🚀 Day 15: Binary Search in C++ (Efficient Searching)

Welcome to **Day 15** of the C++ learning series! 🎯
Today, we learn **Binary Search**, one of the most important and efficient searching algorithms.

---

## 📌 What You Will Learn

* What is Binary Search
* Why it is faster than Linear Search
* How Binary Search works
* Iterative and Recursive implementations

---

## 🧠 What is Binary Search?

Binary Search is an algorithm used to find an element in a **sorted array**.

👉 It works by repeatedly dividing the search space into half.

---

## ⚠️ Important Condition

❗ The array **must be sorted** for Binary Search to work.

---

## 🔍 How It Works

Example:

```id="bsarr1"
1 2 3 4 5 6 7 8 9
```

Find `7`:

* Step 1: Check middle → `5`
* Step 2: 7 > 5 → search right half
* Step 3: Middle becomes `7` → Found ✅

---

## ⚡ Time Complexity

* Binary Search → **O(log n)**
* Linear Search → **O(n)**

👉 Much faster for large datasets

---

## 🔧 Algorithm (Iterative)

```cpp id="bsalgo1"
while(start <= end) {
    int mid = start + (end - start) / 2;

    if(arr[mid] == key) {
        return mid;
    }
    else if(key > arr[mid]) {
        start = mid + 1;
    }
    else {
        end = mid - 1;
    }
}
```

---

## 💻 Full Code (Iterative)

```cpp id="bscode1"
int binarySearch(int arr[], int n, int key) {
    int start = 0, end = n - 1;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] == key) return mid;
        else if(key > arr[mid]) start = mid + 1;
        else end = mid - 1;
    }

    return -1;
}
```

---

## 🔁 Recursive Version

```cpp id="bscode2"
int binarySearch(int arr[], int start, int end, int key) {
    if(start > end) return -1;

    int mid = start + (end - start) / 2;

    if(arr[mid] == key) return mid;
    else if(key > arr[mid])
        return binarySearch(arr, mid + 1, end, key);
    else
        return binarySearch(arr, start, mid - 1, key);
}
```

---

## 🆚 Linear vs Binary Search

| Feature     | Linear Search      | Binary Search         |
| ----------- | ------------------ | --------------------- |
| Requirement | Works on any array | Requires sorted array |
| Speed       | O(n)               | O(log n)              |
| Approach    | Check each element | Divide & conquer      |

---

## 🧩 Practice Problems

Try solving:

* Search element in sorted array
* Return index or -1
* Count number of steps
* Implement recursive binary search
* Find first occurrence (advanced)

---

## 🎯 What You Learned

* Efficient searching technique
* Divide and conquer approach
* Importance of sorted data
* Writing optimized code

---

## 🔥 What’s Next?

➡️ Day 16: **Binary Search Variations (First/Last Occurrence)**

Take your problem-solving to the next level 🚀

---
