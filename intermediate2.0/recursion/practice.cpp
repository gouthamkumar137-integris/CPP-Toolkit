#include <iostream>
using namespace std;

// Print 1 to N
void printNumbers(int n) {
    if(n == 0) return;

    printNumbers(n - 1);
    cout << n << " ";
}

// Print N to 1
void printReverse(int n) {
    if(n == 0) return;

    cout << n << " ";
    printReverse(n - 1);
}

// Factorial
int factorial(int n) {
    if(n == 0) return 1;

    return n * factorial(n - 1);
}

// Fibonacci
int fib(int n) {
    if(n <= 1) return n;

    return fib(n - 1) + fib(n - 2);
}

// Sum of N numbers
int sum(int n) {
    if(n == 0) return 0;

    return n + sum(n - 1);
}

// Sum of digits
int sumDigits(int n) {
    if(n == 0) return 0;

    return (n % 10) + sumDigits(n / 10);
}

// Power function
int power(int a, int b) {
    if(b == 0) return 1;

    return a * power(a, b - 1);
}

int main() {

    cout << "Print 1 to 5: ";
    printNumbers(5);

    cout << "\nPrint 5 to 1: ";
    printReverse(5);

    cout << "\nFactorial of 5: " << factorial(5);

    cout << "\nFibonacci(6): " << fib(6);

    cout << "\nSum of 5 numbers: " << sum(5);

    cout << "\nSum of digits (1234): " << sumDigits(1234);

    cout << "\nPower (2^5): " << power(2, 5);

    return 0;
}