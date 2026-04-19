#include <iostream>
using namespace std;

// Bubble Sort
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Selection Sort
void selectionSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Print Array
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[5] = {5, 2, 4, 1, 3};
    int arr2[5] = {5, 2, 4, 1, 3};

    cout << "Original Array: ";
    printArray(arr1, 5);

    // Bubble Sort
    bubbleSort(arr1, 5);
    cout << "Bubble Sorted: ";
    printArray(arr1, 5);

    // Selection Sort
    selectionSort(arr2, 5);
    cout << "Selection Sorted: ";
    printArray(arr2, 5);

    return 0;
}