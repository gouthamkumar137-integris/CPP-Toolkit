#include <iostream>
using namespace std;

string names[100];
int marks[100];
int countStudents = 0;

// Add Student
void addStudent() {
    cout << "Enter name: ";
    cin >> names[countStudents];

    cout << "Enter marks: ";
    cin >> marks[countStudents];

    countStudents++;
}

// Display Students
void displayStudents() {
    for(int i = 0; i < countStudents; i++) {
        cout << names[i] << " - " << marks[i] << endl;
    }
}

// Linear Search (by name)
void searchStudent(string key) {
    for(int i = 0; i < countStudents; i++) {
        if(names[i] == key) {
            cout << "Found: " << names[i] << " - " << marks[i];
            return;
        }
    }
    cout << "Not found";
}

// Bubble Sort (marks)
void sortMarks() {
    for(int i = 0; i < countStudents - 1; i++) {
        for(int j = 0; j < countStudents - i - 1; j++) {
            if(marks[j] > marks[j+1]) {
                swap(marks[j], marks[j+1]);
                swap(names[j], names[j+1]);
            }
        }
    }
}

// Find Max
void findTopper() {
    int max = marks[0];
    int index = 0;

    for(int i = 1; i < countStudents; i++) {
        if(marks[i] > max) {
            max = marks[i];
            index = i;
        }
    }

    cout << "Topper: " << names[index] << " - " << max;
}

int main() {
    int choice;

    while(true) {
        cout << "\n1. Add Student\n2. Display\n3. Search\n4. Sort\n5. Topper\n6. Exit\n";
        cin >> choice;

        if(choice == 1) addStudent();
        else if(choice == 2) displayStudents();
        else if(choice == 3) {
            string name;
            cout << "Enter name: ";
            cin >> name;
            searchStudent(name);
        }
        else if(choice == 4) sortMarks();
        else if(choice == 5) findTopper();
        else break;
    }

    return 0;
}