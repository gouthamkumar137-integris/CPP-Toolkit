# 🚀 Day 27: STL Containers — Set, Map, Stack & Queue

Welcome to **Day 27** of the C++ learning series! 🎯
Today, we learn **powerful STL containers** used in real-world programming and interviews.

These containers help you write:

* Faster solutions
* Cleaner code
* Optimized logic

---

# 📌 What You Will Learn

* Set (unique sorted values)
* Map (key-value pairs)
* Stack (LIFO)
* Queue (FIFO)
* Basic operations for each

---

# 🧠 1️⃣ SET (Unique Sorted Elements)

A set stores:

* Unique elements only
* Automatically sorted

---

## 💻 Example

```cpp id="set1"
#include <set>
set<int> s;

s.insert(10);
s.insert(5);
s.insert(10);
```

---

## 📊 Visual

```text id="set2"
Insert: 10, 5, 10

Set:
[5, 10]
```

---

## 🔍 Operations

```cpp id="set3"
s.erase(5);
s.count(10);
```

---

# 🧠 2️⃣ MAP (Key → Value)

Map stores data in pairs:

👉 Key → Value

---

## 💻 Example

```cpp id="map1"
#include <map>
map<int, string> m;

m[1] = "Apple";
m[2] = "Banana";
```

---

## 📊 Visual

```text id="map2"
1 → Apple  
2 → Banana
```

---

## 🔍 Operations

```cpp id="map3"
m.erase(1);
m.count(2);
```

---

# 🧠 3️⃣ STACK (LIFO)

👉 Last In First Out

---

## 💻 Example

```cpp id="stack1"
#include <stack>
stack<int> st;

st.push(10);
st.push(20);
st.pop();
```

---

## 📊 Visual

```text id="stack2"
Push: 10 → 20

Top:
20
10
```

---

## 🔍 Operations

```cpp id="stack3"
st.top();
st.empty();
```

---

# 🧠 4️⃣ QUEUE (FIFO)

👉 First In First Out

---

## 💻 Example

```cpp id="queue1"
#include <queue>
queue<int> q;

q.push(10);
q.push(20);
q.pop();
```

---

## 📊 Visual

```text id="queue2"
Front → 10 → 20 → Rear

Pop → 10 removed
```

---

## 🔍 Operations

```cpp id="queue3"
q.front();
q.back();
```

---

# ⚡ Time Complexity

| Container | Insert   | Delete   | Access   |
| --------- | -------- | -------- | -------- |
| Set       | O(log n) | O(log n) | O(log n) |
| Map       | O(log n) | O(log n) | O(log n) |
| Stack     | O(1)     | O(1)     | O(1)     |
| Queue     | O(1)     | O(1)     | O(1)     |

---

# ⚠️ Common Mistakes

* Using index in set/map ❌
* Forgetting sorted nature of set ❌
* Confusing stack vs queue ❌

---

# 🧩 Practice Problems

* Count frequency using map
* Check duplicates using set
* Balanced parentheses using stack
* First non-repeating element

---

# 🎯 What You Learned

* Set for unique values
* Map for key-value storage
* Stack for LIFO logic
* Queue for FIFO logic

---

# 🔥 What’s Next?

➡️ Day 28: **STL Problem Solving (Real Interview Questions)**

Now you start solving real FAANG-level STL problems 🚀

---
