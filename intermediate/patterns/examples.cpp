#include <iostream>
using namespace std;

int main() {

    cout << "Pattern 1: Square\n";
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\nPattern 2: Right Triangle\n";
    for(int i = 1; i <= 4; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\nPattern 3: Number Triangle\n";
    for(int i = 1; i <= 4; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "\nPattern 4: Reverse Triangle\n";
    for(int i = 4; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\nPattern 5: Pyramid\n";
    for(int i = 1; i <= 4; i++) {

        // spaces
        for(int j = 1; j <= 4 - i; j++) {
            cout << " ";
        }

        // stars
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
