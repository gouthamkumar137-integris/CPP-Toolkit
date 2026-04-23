#include <iostream>
using namespace std;

// Iterative Binary Search
int binarySearchIterative(int arr[], int n, int key) {
    int start = 0, end = n - 1;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] == key) {
            return mid;
        }
        else if(key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return -1;
}

// Recursive Binary Search
int binarySearchRecursive(int arr[], int start, int end, int key) {
    if(start > end) return -1;

    int mid = start + (end - start) / 2;

    if(arr[mid] == key) return mid;
    else if(key > arr[mid])
        return binarySearchRecursive(arr, mid + 1, end, key);
    else
        return binarySearchRecursive(arr, start, mid - 1, key);
}

// Print Array
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[7] = {1, 3, 5, 7, 9, 11, 13};
    int n = 7;

    cout << "Array: ";
    printArray(arr, n);

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    // Iterative Search
    int result1 = binarySearchIterative(arr, n, key);

    if(result1 != -1)
        cout << "Iterative: Element found at index " << result1 << endl;
    else
        cout << "Iterative: Element not found" << endl;

    // Recursive Search
    int result2 = binarySearchRecursive(arr, 0, n - 1, key);

    if(result2 != -1)
        cout << "Recursive: Element found at index " << result2 << endl;
    else
        cout << "Recursive: Element not found" << endl;

    return 0;
}