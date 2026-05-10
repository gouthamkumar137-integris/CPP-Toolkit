#include <iostream>
#include <vector>
using namespace std;

// =======================
// O(1) Space Example
// =======================
int arraySum(int arr[], int n) {
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return sum;
}

// =======================
// O(n) Space Example
// =======================
void copyArray(int arr[], int n) {

    vector<int> temp;

    for(int i = 0; i < n; i++) {
        temp.push_back(arr[i]);
    }

    cout << "Copied Array: ";

    for(int x : temp) {
        cout << x << " ";
    }

    cout << endl;
}

// =======================
// Recursive Function
// Space: O(n)
// =======================
void recursivePrint(int n) {

    if(n == 0)
        return;

    cout << n << " ";

    recursivePrint(n - 1);
}

// =======================
// Reverse Array In-place
// Space: O(1)
// =======================
void reverseArray(int arr[], int n) {

    int start = 0;
    int end = n - 1;

    while(start < end) {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}

// =======================
// Fibonacci Iterative
// Time: O(n)
// Space: O(1)
// =======================
int fibonacci(int n) {

    if(n <= 1)
        return n;

    int a = 0;
    int b = 1;

    for(int i = 2; i <= n; i++) {
        int c = a + b;

        a = b;
        b = c;
    }

    return b;
}

// =======================
// MAIN FUNCTION
// =======================
int main() {

    int arr[5] = {1, 2, 3, 4, 5};

    // O(1) Space
    cout << "Array Sum: ";
    cout << arraySum(arr, 5) << endl;

    // O(n) Space
    copyArray(arr, 5);

    // Recursion Space
    cout << "Recursive Print: ";
    recursivePrint(5);
    cout << endl;

    // Reverse Array
    reverseArray(arr, 5);

    cout << "Reversed Array: ";

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Fibonacci
    cout << "Fibonacci(10): ";
    cout << fibonacci(10) << endl;

    return 0;
}