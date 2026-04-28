#include <iostream>
using namespace std;

// =======================
// 1. Integer Square Root
// =======================
int sqrtInt(int n) {
    int start = 0, end = n;
    int ans = 0;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(mid * mid == n) {
            return mid;
        }
        else if(mid * mid < n) {
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return ans;
}

// =======================
// 2. Peak Element
// =======================
int findPeak(int arr[], int n) {
    int start = 0, end = n - 1;

    while(start < end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }

    return start;
}

// =======================
// 3. Book Allocation
// =======================
bool isPossible(int arr[], int n, int students, int maxPages) {
    int studentCount = 1, pages = 0;

    for(int i = 0; i < n; i++) {
        if(pages + arr[i] <= maxPages) {
            pages += arr[i];
        } else {
            studentCount++;
            pages = arr[i];

            if(studentCount > students) return false;
        }
    }

    return true;
}

int allocateBooks(int arr[], int n, int students) {
    int start = 0, sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
        start = max(start, arr[i]);
    }

    int end = sum;
    int ans = -1;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(isPossible(arr, n, students, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}

// =======================
// MAIN FUNCTION
// =======================
int main() {

    // Square Root Example
    int n = 25;
    cout << "Square root of " << n << " = " << sqrtInt(n) << endl;

    // Peak Element Example
    int arr1[6] = {1, 3, 5, 7, 6, 4};
    int peakIndex = findPeak(arr1, 6);
    cout << "Peak element at index: " << peakIndex 
         << " (value = " << arr1[peakIndex] << ")" << endl;

    // Book Allocation Example
    int books[4] = {10, 20, 30, 40};
    int students = 2;
    cout << "Minimum maximum pages = "
         << allocateBooks(books, 4, students) << endl;

    return 0;
}