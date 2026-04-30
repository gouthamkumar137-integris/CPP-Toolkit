//Reverse String
#include <iostream>
using namespace std;

int main() {
    string s = "hello";

    for(int i = s.length() - 1; i >= 0; i--) { //s.lenght() returns length of string
        cout << s[i]; //here we follow simple techinque that printing array from backward
    }//i starts from last index and ends at 0 th index and it prints value for each index

    return 0;
}
//example output
// given sting is hello 
//length is 5 
//loops becomes i=4 ;4>=0 condtion true and prints value in 4 the index
//loops becomes i=3 ;3>=0 condtion true and prints value in 3 the index
//loops becomes i=2 ;2>=0 condtion true and prints value in 2 the index
//loops becomes i=1 ;1>=0 condtion true and prints value in 1 the index
//loops becomes i=0 ;0>=0 condtion true and prints value in 0the index
//loops becomes i=-1 ;-1>=0 conditon becomes false and returns output as
// olleh

#include <iostream>
using namespace std;

int main() {
    string s = "hello";

    // Print string
    cout << "String: " << s << endl;

    // Length
    cout << "Length: " << s.length() << endl;

    // Traverse
    cout << "Characters: ";
    for(int i = 0; i < s.length(); i++) {
        cout << s[i] << " ";
    }

    cout << endl;

    // Modify
    s[0] = 'H';
    cout << "Modified: " << s << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    // Write your logic here

    return 0;
}