#include <iostream>
using namespace std;

// O(1)
void constantTime() {
    int x = 10;
    cout << x << endl;
}

// O(n)
void linearTime(int n) {
    for(int i = 0; i < n; i++) {
        cout << i << " ";
    }
    cout << endl;
}

// O(n^2)
void quadraticTime(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << i << j << " ";
        }
    }
    cout << endl;
}

// O(log n)
void logarithmicTime(int n) {
    int count = 0;
    while(n > 1) {
        n = n / 2;
        count++;
    }
    cout << "Steps: " << count << endl;
}

// Mixed complexity: O(n + log n) → O(n)
void mixedTime(int n) {
    for(int i = 0; i < n; i++) {
        cout << i;
    }

    while(n > 1) {
        n = n / 2;
    }
}

// Nested dependent loop: O(n(n+1)/2) → O(n^2)
void triangleLoop(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {

    cout << "O(1): ";
    constantTime();

    cout << "O(n): ";
    linearTime(5);

    cout << "\nO(n^2): ";
    quadraticTime(3);

    cout << "\nO(log n): ";
    logarithmicTime(16);

    cout << "\nTriangle Pattern:\n";
    triangleLoop(5);

    return 0;
}