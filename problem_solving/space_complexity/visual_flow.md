# 📊 Visual Guide to Space Complexity in C++

Understanding space complexity becomes much easier when you **visualize how memory is used** inside programs.

---

# 🧠 What is Space Complexity?

Space Complexity tells us:

👉 How much memory an algorithm uses as input size grows.

---

# 📦 Types of Space

## 1️⃣ Input Space

Memory used for storing input data.

```cpp id="vsp1"
int arr[5] = {1,2,3,4,5};
```

👉 Array itself is input space.

---

## 2️⃣ Auxiliary Space

Extra memory used by algorithm.

```cpp id="vsp2"
int temp[5];
```

👉 Temporary array = extra memory.

---

# ⚡ O(1) Space — Constant Memory

## Example

```cpp id="vsp3"
int sum = 0;

for(int i = 0; i < n; i++) {
    sum += arr[i];
}
```

---

## 📊 Visual Flow

```text id="vsp4"
Input Array
[1 2 3 4 5]

Extra Memory:
sum
i

Only fixed variables used
```

---

## 🧠 Insight

👉 Memory does NOT grow with input size.

---

# 📈 O(n) Space — Linear Memory

## Example

```cpp id="vsp5"
int temp[n];

for(int i = 0; i < n; i++) {
    temp[i] = arr[i];
}
```

---

## 📊 Visual Flow

```text id="vsp6"
Input:
[1 2 3 4 5]

Extra Array:
[1 2 3 4 5]
```

👉 Extra memory grows with `n`

---

# 🔥 Recursion Stack Space

Every recursive function call uses stack memory.

---

## Example

```cpp id="vsp7"
void print(int n) {
    if(n == 0) return;

    print(n - 1);
}
```

---

## 📊 Recursive Call Stack

```text id="vsp8"
print(5)
 ↓
print(4)
 ↓
print(3)
 ↓
print(2)
 ↓
print(1)
 ↓
print(0)
```

---

## 🧠 Insight

👉 Each call waits in memory.

👉 Total stack memory = O(n)

---

# ⚡ Iterative vs Recursive

## Iterative

```cpp id="vsp9"
for(int i = 0; i < n; i++) {
    cout << i;
}
```

### 📊 Memory

```text id="vsp10"
i
```

👉 O(1) Space

---

## Recursive

```cpp id="vsp11"
print(n - 1);
```

### 📊 Memory

```text id="vsp12"
print(5)
print(4)
print(3)
print(2)
print(1)
```

👉 O(n) Stack Space

---

# 📊 Space Complexity Comparison

| Algorithm                 | Space Complexity |
| ------------------------- | ---------------- |
| Array Traversal           | O(1)             |
| Copy Array                | O(n)             |
| Merge Sort                | O(n)             |
| Recursive Fibonacci       | O(n)             |
| Binary Search (Iterative) | O(1)             |

---

# ⚖️ Time vs Space Tradeoff

Sometimes:

* Faster algorithms use more memory
* Less memory may increase time

---

## Example

### Brute Force

```text id="vsp13"
Time  → O(n²)
Space → O(1)
```

---

### Optimized Using HashMap

```text id="vsp14"
Time  → O(n)
Space → O(n)
```

---

# 🧠 Core Insight

Good programmers think:

👉 “Can I reduce time?”
👉 “Can I reduce memory?”

---

# 🔥 Memory Growth Visualization

```text id="vsp15"
Space ↑

O(n²)      🚀
          🚀

O(n)      /
        /

O(1) ───────────

+--------------------→ Input Size
```

---

# ⚠️ Common Mistakes

* Ignoring recursion stack ❌
* Creating unnecessary arrays ❌
* Using extra vectors carelessly ❌

---

# 🎯 Key Takeaways

* O(1) → fixed memory
* O(n) → memory grows linearly
* Recursion uses stack memory
* Optimization is balance between time & space

---

# 🚀 Why This Matters

Space optimization helps:

* Reduce memory usage
* Improve performance
* Handle large inputs efficiently

---
