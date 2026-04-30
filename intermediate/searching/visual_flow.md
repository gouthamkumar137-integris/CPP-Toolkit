# 🚀 Binary Search Variations — Visual Explanation

Understanding Binary Search variations becomes easy when you **visualize the steps** instead of just memorizing code.

---

## 📊 Example Array

```
Index:   0 1 2 3 4 5 6 7 8 9
Array:   1 2 2 2 3 4 5 5 6 7
```

👉 Target = **2**

---

## ❌ Normal Binary Search (Basic)

```
Step 1:
start=0, end=9
mid=4 → arr[4]=3

Step 2:
end=3
mid=1 → arr[1]=2 ✅ FOUND
```

👉 Stops immediately ❌

### Problem:

* Returns index **1**
* But there are multiple `2`s

---

## 🔥 First Occurrence (LEFT Logic)

👉 When found:
**Do NOT stop → move LEFT**

---

### 📊 Visual Steps

```
Step 1:
start=0, end=9
mid=4 → 3 > 2 → go LEFT

[1 2 2 2]

Step 2:
start=0, end=3
mid=1 → 2 == key ✅
store ans = 1
move LEFT (end = mid - 1)

[1]

Step 3:
start=0, end=0
mid=0 → 1 < 2 → go RIGHT

Stop
```

👉 Final Answer = **1** ✅

---

## 🔥 Last Occurrence (RIGHT Logic)

👉 When found:
**Move RIGHT**

---

### 📊 Visual Steps

```
Step 1:
mid=4 → go LEFT

Step 2:
mid=1 → 2 == key ✅
store ans = 1
move RIGHT

Step 3:
mid=2 → 2 == key ✅
store ans = 2
move RIGHT

Step 4:
mid=3 → 2 == key ✅
store ans = 3
move RIGHT

Stop
```

👉 Final Answer = **3** ✅

---

## 🔢 Count Occurrences

```
First = 1
Last  = 3

Count = (Last - First + 1) = 3
```

👉 No extra loop needed!

---

## 🧠 Lower Bound (≥ key)

👉 First element **greater than or equal to key**

```
Array: 1 2 2 2 3...
Answer = index 1
```

### Logic

```
If arr[mid] >= key:
    store ans
    move LEFT
```

---

## 🧠 Upper Bound (> key)

👉 First element **strictly greater than key**

```
Array: 1 2 2 2 3...
Answer = index 4
```

### Logic

```
If arr[mid] > key:
    store ans
    move LEFT
```

---

## 🧠 Core Pattern (Most Important)

| Situation           | Action       |
| ------------------- | ------------ |
| Found element       | Store answer |
| Find FIRST          | Move LEFT    |
| Find LAST           | Move RIGHT   |
| Condition satisfied | Move LEFT    |

---

## 🎯 Memory Trick

* First occurrence → **LEFT**
* Last occurrence → **RIGHT**
* Bound problems → **LEFT after storing**

---

## 🎭 Simple Analogy

```
2 2 2 2
```

* First person → go LEFT
* Last person → go RIGHT

---

## ⚠️ Common Mistake

```
if(arr[mid] == key)
    return mid;
```

❌ Wrong for variations

✔️ Correct:

* Store answer
* Continue searching

---

## 🎯 Key Insight

Binary Search is not just about finding an element.

👉 It’s about:
**Reducing search space intelligently**

---

## 🚀 Next Step

* Binary Search on Answers
* Advanced problems (square root, allocation problems)

---
