//find maximum or largest element in array
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {3, 7, 2, 9, 1}; //array initialization
    int max = arr[0]; //assuming the first element it self the maximum one

    for(int i = 1; i < 5; i++) { //traversing an array
        if(arr[i] > max) { //check for element that is larger than the max
            max = arr[i]; //if condition becomes true then max is initialized by the value corresponding to i value index
        }
    }

    cout << "Max = " << max; // prints the output

    return 0;
}
