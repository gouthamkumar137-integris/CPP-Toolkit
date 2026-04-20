
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {2, 4, 6, 8, 10};

    int sum = 0;
    int max = arr[0];

    for(int i = 0; i < 5; i++) {
        sum += arr[i];

        if(arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Sum: " << sum << endl;
    cout << "Max: " << max;

    return 0;
}
