# 🚀 Day 11: Selection Sort in C++ (With Comparison)

Welcome to **Day 11** of the C++ learning series! 🎯
Today, we learn **Selection Sort** and compare it with **Bubble Sort** to understand different approaches to sorting.

---

## 📌 What You Will Learn

* What is Selection Sort
* How Selection Sort works
* Difference between Bubble Sort and Selection Sort
* Choosing the right approach

---

## 🧠 What is Selection Sort?

Selection Sort works by:

* Finding the **smallest element**
* Placing it at the correct position

👉 This process repeats for all elements.

---

## 🔄 How It Works

Example:

```
5 2 4 1 3
```

### Pass 1:

Smallest = 1

```
1 2 4 5 3
```

### Pass 2:

Next smallest = 2

```
1 2 4 5 3
```

### Pass 3:

Next smallest = 3

```
1 2 3 5 4
```

### Pass 4:

```
1 2 3 4 5
```

---

## 🔧 Algorithm

```cpp
for(int i = 0; i < n - 1; i++) {
    int minIndex = i;

    for(int j = i + 1; j < n; j++) {
        if(arr[j] < arr[minIndex]) {
            minIndex = j;
        }
    }

    swap(arr[i], arr[minIndex]);
}
```

---

## 💻 Selection Sort Code

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 2, 4, 1, 3};
    int n = 5;

    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

---

## 🆚 Bubble Sort vs Selection Sort

| Feature     | Bubble Sort            | Selection Sort         |
| ----------- | ---------------------- | ---------------------- |
| Idea        | Swap adjacent elements | Select minimum element |
| Swaps       | Many                   | Few                    |
| Comparisons | High                   | High                   |
| Stability   | Stable                 | Not stable             |

---

## 🧩 Practice Problems

Try solving:

* Sort array using Selection Sort
* Sort in descending order
* Count number of swaps
* Print array after each pass
* Compare with Bubble Sort

---

## 🎯 What You Learned

* How Selection Sort works
* Difference between sorting techniques
* How to compare algorithms

---

## 🔥 What’s Next?

➡️ Day 12: **Strings + Problem Solving**

Start solving more real-world problems 🚀

---


