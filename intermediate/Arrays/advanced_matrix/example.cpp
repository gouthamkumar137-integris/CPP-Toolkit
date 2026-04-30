#include <iostream>
using namespace std;

// Print Matrix
void printMatrix(int arr[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Transpose (print)
void transpose(int arr[3][3]) {
    cout << "\nTranspose:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

// Diagonal Traversal
void diagonal(int arr[3][3]) {
    cout << "\nDiagonal: ";
    for(int i = 0; i < 3; i++) {
        cout << arr[i][i] << " ";
    }
    cout << endl;
}

// Reverse Each Row
void reverseRows(int arr[3][3]) {
    for(int i = 0; i < 3; i++) {
        int start = 0, end = 2;
        while(start < end) {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }

    cout << "\nRows Reversed:\n";
    printMatrix(arr);
}

// Spiral Traversal
void spiral(int arr[3][3]) {
    cout << "\nSpiral: ";

    int top = 0, bottom = 2;
    int left = 0, right = 2;

    while(top <= bottom && left <= right) {

        for(int i = left; i <= right; i++)
            cout << arr[top][i] << " ";
        top++;

        for(int i = top; i <= bottom; i++)
            cout << arr[i][right] << " ";
        right--;

        if(top <= bottom) {
            for(int i = right; i >= left; i--)
                cout << arr[bottom][i] << " ";
            bottom--;
        }

        if(left <= right) {
            for(int i = bottom; i >= top; i--)
                cout << arr[i][left] << " ";
            left++;
        }
    }

    cout << endl;
}

// Row with Maximum Sum
void maxRowSum(int arr[3][3]) {
    int maxSum = -1, rowIndex = 0;

    for(int i = 0; i < 3; i++) {
        int sum = 0;
        for(int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }

        if(sum > maxSum) {
            maxSum = sum;
            rowIndex = i;
        }
    }

    cout << "\nRow with max sum: Row " << rowIndex 
         << " (Sum = " << maxSum << ")" << endl;
}

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:\n";
    printMatrix(arr);

    transpose(arr);
    diagonal(arr);
    spiral(arr);
    maxRowSum(arr);
    reverseRows(arr);

    return 0;
}