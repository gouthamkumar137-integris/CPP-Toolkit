# 📊 Visual Guide to Time Complexity (Big-O)

Understanding time complexity becomes much easier when you **visualize how algorithms grow** with input size.

---

## 🧠 Concept

* **X-axis (→)** = Input size (n)
* **Y-axis (↑)** = Time taken

---

## 🚀 O(1) — Constant Time

```text
Time ↑
     |
     | ─────────────
     |
     |
     +----------------→ n
```

👉 Time remains constant regardless of input size
👉 Example: Accessing an array element

---

## ⚡ O(log n) — Logarithmic Time

```text
Time ↑
     |
     |      ────
     |    ─
     |  ─
     | ─
     +----------------→ n
```

👉 Grows very slowly
👉 Efficient for large inputs
👉 Example: Binary Search

---

## 📈 O(n) — Linear Time

```text
Time ↑
     |
     |        /
     |      /
     |    /
     |  /
     +----------------→ n
```

👉 Time increases proportionally with input
👉 Example: Single loop

---

## 🔥 O(n log n) — Efficient Growth

```text
Time ↑
     |
     |        /
     |      /
     |    /
     |  /
     | /
     +----------------→ n
```

👉 Slightly higher than linear
👉 Used in efficient sorting algorithms

---

## 💣 O(n²) — Quadratic Time

```text
Time ↑
     |
     |        )
     |      )
     |    )
     |  )
     +----------------→ n
```

👉 Grows rapidly
👉 Nested loops
👉 Becomes slow for large inputs

---

## ☠️ O(2ⁿ) — Exponential Time

```text
Time ↑
     |
     |           🚀
     |        🚀
     |     🚀
     |  🚀
     +----------------→ n
```

👉 Extremely slow growth
👉 Used in recursion and backtracking
👉 Avoid for large inputs

---

## 📊 Comparison (All Together)

```text
Time ↑

O(2ⁿ)        🚀
            🚀
O(n²)     )
         )
O(n log n)  /
         /
O(n)     /
       /
O(log n) ─
O(1)  ─────────

+------------------------→ n
```

---

## 🎯 Order of Efficiency (Best → Worst)

```text
O(1) < O(log n) < O(n) < O(n log n) < O(n²) < O(2ⁿ)
```

---

## 🧠 Key Takeaways

* Lower complexity = faster algorithm
* Always aim to reduce time complexity
* Small improvements can make huge differences

---

## 🔥 Example Insight

For large input (n = 100000):

* O(n²) → 10,000,000,000 operations ❌
* O(n log n) → ~1,700,000 operations ✅

---

## 🚀 Why This Matters

Understanding time complexity helps you:

* Write efficient code
* Optimize solutions
* Perform better in interviews

---
