# 🚀 Day 02 – Variables & Data Types in C++

Welcome to Day 02! Today we learn the **foundation of programming** — variables and data types.


## 🔹 1. What is a Variable?

A variable is a **named storage** that holds data or simply variable is name given to memory location.

### Syntax:
datatype variable_name=value;

### Example:

```cpp
int age = 20;
```

* `int` → data type
* `age` → variable name
* `20` → value

##### Note : variable name can be changed you can also write your name as variable and value also alterable.

## 🔹 2. Data Types in C++

Data types define **what kind of data** a variable can store.

### 🔸 Basic Data Types

| Type   | Example    | Description          |
| ------ | ---------- | -------------------- |
| int    | 10         | Integer numbers      |
| float  | 3.14       | Decimal numbers      |
| double | 3.14159    | More precise decimal |
| char   | 'A'        | Single character     |
| bool   | true/false | Boolean value        |

#### Note: In cpp u have to mention datatypes for most of the things since all the memory managed by programes only 

## 🔹 3. Declaring Variables

### Syntax:
datatype  variablename;

### Examples:
```cpp
int a; //declaration of variable
float price;
char grade;
```
#### Note: In cpp semicolon is necessary to tell the compiler to termination of statements otherwise it gives an termination error.

## 🔹 4. Initialization

initialization is prosess of assigning a value to a variable.
= operator is used for initializing operator

```cpp
int a = 10;
float pi = 3.14;
char ch = 'G';
```

## 🔹 5. Multiple Variables
 u can assign multiple varible at same time if they contain same datatype only.

```cpp
int x = 1, y = 2, z = 3;
```

## 🔹 6. Constants

Constants are values that **cannot be changed**.

```cpp
const int MAX = 100;
```

## 🔹 7. Naming Rules

✅ Valid:

* `age`
* `total_marks`

❌ Invalid:

* `1age`
* `int`
* `my-name`

### Note: In cpp there is rules for naming an variable which i will share with u soon...

## 🔥 8. Key Takeaways

* Variables store data.
* Data types define which type of data or item we are storing inside that variable.
* Always initialize variables.
* Use meaningful names so that u can easy to read and write.
## 🧠 Practice Problem

👉 Write a program to:

* Store your name, age, and marks
* Print them

## 🚀 Next Day Preview

👉 Operators & Expressions
