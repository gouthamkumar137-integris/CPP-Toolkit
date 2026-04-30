# 🚀 Day 17: Binary Search on Answers in C++

Welcome to **Day 17** of the C++ learning series! 🎯
Today, we learn one of the most powerful problem-solving techniques: **Binary Search on Answers**.

---

## 📌 What You Will Learn

* What is Binary Search on Answers
* How to apply Binary Search beyond arrays
* Solving optimization problems
* Recognizing patterns in complex questions

---

## 🧠 What is Binary Search on Answers?

Binary Search is not limited to searching elements in arrays.

👉 It can also be used to find answers within a **range of possible values**.

---

## 💡 Core Idea

Instead of searching in an array:

👉 We search in a **range of answers**

---

## 🧠 General Pattern

1. Define search space (low → high)
2. Find mid value
3. Check if mid is a valid answer
4. If valid → move LEFT (try smaller answer)
5. If invalid → move RIGHT (try larger answer)

---

## 🧩 Problem 1: Integer Square Root

### 💡 Problem

Find the integer square root of a number.

### 🧪 Example

```id="sqrtarr"
Input: 25  
Output: 5
```

### 💻 Code

```cpp id="sqrtcode"
int sqrtInt(int n) {
    int start = 0, end = n;
    int ans = 0;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(mid * mid == n) return mid;
        else if(mid * mid < n) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans;
}
```

---

## 🧩 Problem 2: Peak Element

### 💡 Problem

Find a peak element in an array.

### 💻 Code

```cpp id="peakcode"
int findPeak(int arr[], int n) {
    int start = 0, end = n - 1;

    while(start < end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }

    return start;
}
```

---

## 🧩 Problem 3: Book Allocation (Important 🔥)

### 💡 Problem

Distribute books among students such that the **maximum pages assigned is minimized**.

---

### 🧠 Key Idea

👉 Search space:

* Minimum → max element
* Maximum → sum of array

---

### 💻 Code (Helper Function)

```cpp id="bookhelper"
bool isPossible(int arr[], int n, int students, int maxPages) {
    int studentCount = 1, pages = 0;

    for(int i = 0; i < n; i++) {
        if(pages + arr[i] <= maxPages) {
            pages += arr[i];
        } else {
            studentCount++;
            pages = arr[i];

            if(studentCount > students) return false;
        }
    }

    return true;
}
```

---

### 💻 Code (Binary Search)

```cpp id="bookmain"
int allocateBooks(int arr[], int n, int students) {
    int start = 0, sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
        start = max(start, arr[i]);
    }

    int end = sum;
    int ans = -1;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(isPossible(arr, n, students, mid)) {
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

## 🧠 Master Pattern

| Step         | Explanation      |
| ------------ | ---------------- |
| Define range | Possible answers |
| Check mid    | Valid or not     |
| If valid     | Move LEFT        |
| If invalid   | Move RIGHT       |

---

## 🎯 When to Use This?

Use Binary Search on Answers when:

* You see **minimum / maximum** in problem
* You need to **optimize a value**
* The answer is not directly given

---

## 🧩 Practice Problems

Try solving:

* Integer square root
* Book allocation
* Painter partition problem
* Capacity to ship packages
* Minimum eating speed

---

## 🎯 What You Learned

* Advanced Binary Search technique
* Optimization problem solving
* Thinking in terms of ranges
* Efficient algorithm design

---

## 🔥 What’s Next?

➡️ Day 18: **Recursion (New Way of Thinking)**

Move beyond loops into recursive logic 🚀

---
