//cpp
// 📘 Day 3: Control Flow Examples (C++)
// This file demonstrates basic control flow concepts:
// if-else, nested if, switch, and loops

#include <iostream>
using namespace std;

// 🔹 Example 1: if-else (Pass or Fail)
void example_if_else() {
    int marks;
    cout << "\nEnter marks: ";
    cin >> marks;

    if (marks >= 40) {
        cout << "Result: Pass\n";
    } else {
        cout << "Result: Fail\n";
    }
}

// 🔹 Example 2: Nested if (Distinction / Pass / Fail)
void example_nested_if() {
    int marks;
    cout << "\nEnter marks: ";
    cin >> marks;

    if (marks >= 40) {
        if (marks >= 75) {
            cout << "Result: Distinction\n";
        } else {
            cout << "Result: Pass\n";
        }
    } else {
        cout << "Result: Fail\n";
    }
}

// 🔹 Example 3: Switch Case (Day Finder)
void example_switch() {
    int day;
    cout << "\nEnter day number (1-7): ";
    cin >> day;

    switch(day) {
        case 1: cout << "Monday\n"; break;
        case 2: cout << "Tuesday\n"; break;
        case 3: cout << "Wednesday\n"; break;
        case 4: cout << "Thursday\n"; break;
        case 5: cout << "Friday\n"; break;
        case 6: cout << "Saturday\n"; break;
        case 7: cout << "Sunday\n"; break;
        default: cout << "Invalid day\n";
    }
}

// 🔹 Example 4: for loop (Print 1 to N)
void example_for_loop() {
    int n;
    cout << "\nEnter N: ";
    cin >> n;

    cout << "Numbers from 1 to " << n << ": ";
    for(int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
}

// 🔹 Example 5: while loop (Sum of N numbers)
void example_while_loop() {
    int n, i = 1, sum = 0;
    cout << "\nEnter N: ";
    cin >> n;

    while(i <= n) {
        sum += i;
        i++;
    }

    cout << "Sum = " << sum << endl;
}

// 🔹 Example 6: do-while loop (At least once execution)
void example_do_while() {
    int n;
    cout << "\nEnter a number (>0 to continue): ";
    cin >> n;

    do {
        cout << "You entered: " << n << endl;
        cout << "Enter again (>0 to continue): ";
        cin >> n;
    } while(n > 0);
}

// 🔹 Main Menu
int main() {
    int choice;

    do {
        cout << "\n===== Control Flow Examples =====\n";
        cout << "1. if-else\n";
        cout << "2. Nested if\n";
        cout << "3. Switch case\n";
        cout << "4. For loop\n";
        cout << "5. While loop\n";
        cout << "6. Do-while loop\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: example_if_else(); break;
            case 2: example_nested_if(); break;
            case 3: example_switch(); break;
            case 4: example_for_loop(); break;
            case 5: example_while_loop(); break;
            case 6: example_do_while(); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while(choice != 0);

    return 0;
}

