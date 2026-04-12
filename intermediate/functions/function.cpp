#include <iostream>
using namespace std;

bool isEven(int n) {
    if(n % 2 == 0)
        return true;
    else
        return false;
}

int main() {
    int num = 4;

    if(isEven(num))
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}