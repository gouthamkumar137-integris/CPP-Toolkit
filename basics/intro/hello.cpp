/**
 * @file 01_cpp_basics_toolkit.cpp
 * @author Gowtham
 * @brief A clean and structured introduction to C++ fundamentals.
 *
 * Concepts Covered:
 * - Input / Output
 * - Variables & Data Types
 * - Conditional Statements
 * - Loops
 * - Functions
 */

#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

//  Function to check even or odd
bool isEven(int num) {
    return num % 2 == 0;
}

//  Function to calculate factorial
long long factorial(int n) {
    if (n < 0) return -1; // invalid
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

//  Function to reverse a number
int reverseNumber(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

//  Function to find maximum in array
int findMax(const vector<int>& arr) {
    int maxVal = arr[0];
    for (int num : arr) {
        if (num > maxVal) {
            maxVal = num;
        }
    }
    return maxVal;
}

int main() {
    cout << " Welcome to C++ Toolkit - Day 1\n";
    cout << "----------------------------------\n";

    //  Input Section
    int num;
    cout << "Enter a number: ";
    cin >> num;

    //  Even or Odd
    cout << "Even Check: " << (isEven(num) ? "Yes" : "No") << endl;

    //  Factorial
    cout << "Factorial: " << factorial(num) << endl;

    //  Reverse Number
    cout << "Reversed Number: " << reverseNumber(num) << endl;

    //  Array Example
    int n;
    cout << "\nEnter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Maximum Element: " << findMax(arr) << endl;

    cout << "\n End of Toolkit Execution\n";
    return 0;
}