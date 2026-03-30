## 🎯 Goal
Understand how a C++ program works and write your first program.

## 🧩 1. Basic Structure of C++

#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!";
    return 0;
}

## 🔍 Breakdown

1. #include <iostream>	    Enables input/output
2. using namespace std;	Avoids writing std::
3. int main()	            Entry point of program
4. cout	                Prints output
5. return 0;	            Program ended successfully

## 🧪 2. Taking Input

#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    cout << "You entered: " << x;
}

## ⚡ 3. Key Rules

* Every statement ends with " ; "
* C++ is case-sensitive
* Code runs from main()

## 🧠 4. Mini Challenge

1. 👉 Write a program to take two numbers and print their sum.

## ✅ Expected Output:
Input: 5 3

Output: 8

## key hints or takeaways:
1. iostream:
    we must right it for every program it's meaning already know to compiler that we are using 
    ### cin and cout
    so we must include this headerfile in order to run program.
2. using namespace std:
    we use this also for input and output operations that is 
    ### cin and cout 
    at begining we prefer it later we can use std::  for the same operation which is preffered in industry i will explain it in my future soon...
3. int main():
    it is block of code where program starts and every cpp program must contain one main funtion and more than one or less than one main() function is also not allowed hear we use int beacuse it act as return type mainly it syntax given by
    ## datatypes main() 
    i will soon tell you what is datatypes and keywords in next module now you learn the things like how cpp program looks means body of it..
4. {}:
    inside this all statements need to be executed are written
5. return 0; :
    since we used int near main() function observe we written
    ### int main() 
    while starting program so we used return function to exit after all statements executed inside {} we can also avoid using return 0; by using
    ### void main()
    void means null 
6. In today session you just look how it looks outside and some topics which are in cpp from tommorow onwards we move to deep to understand all 
   the things like
    #### datatypes ,return function(), input and output and so much things

## 💡 Why This Repo?
### Beginner-friendly 🚀
### Clean & structured 📂
### Focus on logic, not theory ⚡

## ⭐ Support
If this helps you, consider giving a ⭐ to the repo!


