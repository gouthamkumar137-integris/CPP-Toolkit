#include <iostream>
using namespace std;

// First Occurrence
int firstOccurrence(int arr[], int n, int key) {
    int start = 0, end = n - 1;
    int ans = -1;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] == key) {
            ans = mid;
            end = mid - 1; // move left
        }
        else if(key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return ans;
}

// Last Occurrence
int lastOccurrence(int arr[], int n, int key) {
    int start = 0, end = n - 1;
    int ans = -1;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] == key) {
            ans = mid;
            start = mid + 1; // move right
        }
        else if(key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return ans;
}

// Count Occurrences
int countOccurrences(int arr[], int n, int key) {
    int first = firstOccurrence(arr, n, key);
    int last = lastOccurrence(arr, n, key);

    if(first == -1) return 0;

    return last - first + 1;
}

// Lower Bound (first element >= key)
int lowerBound(int arr[], int n, int key) {
    int start = 0, end = n - 1;
    int ans = n;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] >= key) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}

// Upper Bound (first element > key)
int upperBound(int arr[], int n, int key) {
    int start = 0, end = n - 1;
    int ans = n;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] > key) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}

// Print Array
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {1, 2, 2, 2, 3, 4, 5, 5, 6, 7};
    int n = 10;

    cout << "Array: ";
    printArray(arr, n);

    int key;
    cout << "Enter element: ";
    cin >> key;

    int first = firstOccurrence(arr, n, key);
    int last = lastOccurrence(arr, n, key);
    int count = countOccurrences(arr, n, key);
    int lb = lowerBound(arr, n, key);
    int ub = upperBound(arr, n, key);

    cout << "\nFirst Occurrence: " << first << endl;
    cout << "Last Occurrence: " << last << endl;
    cout << "Count: " << count << endl;
    cout << "Lower Bound Index: " << lb << endl;
    cout << "Upper Bound Index: " << ub << endl;

    return 0;
}