#include <iostream>
using namespace std;

// Check even or odd
void checkEvenOdd(int n) {
    if(n & 1)
        cout << "Odd\n";
    else
        cout << "Even\n";
}

// Get i-th bit
int getBit(int n, int i) {
    return (n >> i) & 1;
}

// Set i-th bit
int setBit(int n, int i) {
    return n | (1 << i);
}

// Clear i-th bit
int clearBit(int n, int i) {
    return n & ~(1 << i);
}

// Toggle i-th bit
int toggleBit(int n, int i) {
    return n ^ (1 << i);
}

// Count set bits
int countBits(int n) {
    int count = 0;
    while(n) {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}

// Power of 2
bool isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

// Single number
int singleNumber(int arr[], int n) {
    int res = 0;
    for(int i = 0; i < n; i++) {
        res ^= arr[i];
    }
    return res;
}

int main() {

    int n = 5;

    cout << "Even/Odd: ";
    checkEvenOdd(n);

    cout << "Get 2nd bit: " << getBit(n, 2) << endl;
    cout << "Set 1st bit: " << setBit(n, 1) << endl;
    cout << "Clear 0th bit: " << clearBit(n, 0) << endl;
    cout << "Toggle 1st bit: " << toggleBit(n, 1) << endl;

    cout << "Set bits count: " << countBits(n) << endl;

    cout << "Is power of 2 (8): " << isPowerOfTwo(8) << endl;

    int arr[5] = {1, 2, 3, 2, 1};
    cout << "Single number: " << singleNumber(arr, 5) << endl;

    return 0;
}