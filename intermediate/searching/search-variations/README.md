# 🚀 Day 16: Binary Search Variations in C++

Welcome to **Day 16** of the C++ learning series! 🎯
Today, we explore **advanced variations of Binary Search** used in real problem solving and interviews.

---

## 📌 What You Will Learn

* First and Last Occurrence
* Counting duplicates
* Lower Bound and Upper Bound
* Pattern-based Binary Search thinking

---

## 🧠 Why Variations?

Binary Search is not just for finding an element.

👉 It can be used to:

* Find positions
* Handle duplicates
* Solve range-based problems

---

## 🧩 Problem 1: First Occurrence

### 💡 Problem

Find the first index of a given element in a sorted array.

### 💻 Code

```cpp id="f1occ"
int firstOccurrence(int arr[], int n, int key) {
    int start = 0, end = n - 1;
    int ans = -1;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return ans;
}
```

---

## 🧩 Problem 2: Last Occurrence

### 💡 Problem

Find the last index of a given element.

### 💻 Code

```cpp id="locc"
int lastOccurrence(int arr[], int n, int key) {
    int start = 0, end = n - 1;
    int ans = -1;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return ans;
}
```

---

## 🧩 Problem 3: Count Occurrences

### 💡 Formula

```cpp id="countocc"
int count = lastIndex - firstIndex + 1;
```

---

## 🧩 Problem 4: Lower Bound

### 💡 Problem

Find the first element **greater than or equal to key**.

### 💻 Code

```cpp id="lb"
int lowerBound(int arr[], int n, int key) {
    int start = 0, end = n - 1;
    int ans = n;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] >= key) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}
```

---

## 🧩 Problem 5: Upper Bound

### 💡 Problem

Find the first element **greater than key**.

### 💻 Code

```cpp id="ub"
int upperBound(int arr[], int n, int key) {
    int start = 0, end = n - 1;
    int ans = n;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] > key) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}
```

---

## 🧠 Pattern to Remember

| Situation                | Move       |
| ------------------------ | ---------- |
| Found (first occurrence) | Move LEFT  |
| Found (last occurrence)  | Move RIGHT |
| Condition ≥ key          | Move LEFT  |
| Condition > key          | Move LEFT  |

---

## 🧩 Practice Problems

Try solving:

* First occurrence of element
* Last occurrence of element
* Count duplicates
* Implement lower bound
* Implement upper bound

---

## 🎯 What You Learned

* Advanced Binary Search techniques
* Handling duplicates in arrays
* Boundary-based searching
* Pattern recognition in algorithms

---

## 🔥 What’s Next?

➡️ Day 17: **Binary Search on Answers (Advanced Problems)**

Learn how to solve complex problems using Binary Search 🚀

---
