# 🚀 Day 22: Bit Manipulation Basics in C++

Welcome to **Day 22** of the C++ learning series! 🎯
Today, we explore **Bit Manipulation**, a powerful technique to work directly with binary representations.

---

## 📌 What You Will Learn

* Binary representation of numbers
* Bitwise operators
* Common bit tricks
* Solving problems using bits

---

## 🧠 What is Bit Manipulation?

Bit manipulation means working with numbers at the **binary (bit) level**.

Example:

```id="bitex1"
5 = 101 (binary)
```

---

## ⚙️ Bitwise Operators

| Operator | Meaning     |    |
| -------- | ----------- | -- |
| `&`      | AND         |    |
| `        | `           | OR |
| `^`      | XOR         |    |
| `~`      | NOT         |    |
| `<<`     | Left Shift  |    |
| `>>`     | Right Shift |    |

---

## 🔍 Examples

```cpp id="bitex2"
5 & 3 = 1
5 | 3 = 7
5 ^ 3 = 6
```

---

## 💡 Important Tricks

### 1️⃣ Check Even or Odd

```cpp id="bittrick1"
if(n & 1)
    cout << "Odd";
else
    cout << "Even";
```

---

### 2️⃣ Get i-th Bit

```cpp id="bittrick2"
int bit = (n >> i) & 1;
```

---

### 3️⃣ Set i-th Bit

```cpp id="bittrick3"
n = n | (1 << i);
```

---

### 4️⃣ Clear i-th Bit

```cpp id="bittrick4"
n = n & ~(1 << i);
```

---

### 5️⃣ Toggle i-th Bit

```cpp id="bittrick5"
n = n ^ (1 << i);
```

---

## 🧩 Problem 1: Count Set Bits

```cpp id="countbits"
int countBits(int n) {
    int count = 0;

    while(n > 0) {
        count += (n & 1);
        n = n >> 1;
    }

    return count;
}
```

---

## 🧩 Problem 2: Power of 2

```cpp id="pow2"
bool isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}
```

---

## 🧩 Problem 3: Single Number

👉 Find element that appears once (others twice)

```cpp id="single"
int singleNumber(int arr[], int n) {
    int result = 0;

    for(int i = 0; i < n; i++) {
        result ^= arr[i];
    }

    return result;
}
```

---

## 🧠 Key Insights

* XOR cancels duplicates
* Shifting helps access bits
* Bit operations are fast

---

## ⚠️ Common Mistakes

* Confusing `&` and `&&` ❌
* Wrong shift direction ❌
* Ignoring binary logic ❌

---

## 🧩 Practice Problems

* Count set bits
* Check power of 2
* Find unique element
* Reverse bits
* Missing number (XOR trick)

---

## 🎯 What You Learned

* Working with binary numbers
* Efficient bit-level operations
* Solving problems using bit tricks
* Writing optimized code

---

## 🔥 What’s Next?

➡️ Day 23: **Time Complexity & Big-O Analysis**

Understand how efficient your code really is 🚀

---


