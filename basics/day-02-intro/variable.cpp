//run this program in u're laptop and see output
#include <iostream> // headerfile for input and output operations
using namespace std; 

int main() {    // program starts running from main()
    int age = 20;  //variable initialization
    float height = 5.9; 
    char grade = 'A';

    cout << "Age: " << age << endl; // << is used for cout ans >> is used for cin
    cout << "Height: " << height << endl; // what u written inside " " cout prints same thing it don't make alteration
    cout << "Grade: " << grade << endl; // the age,.. are the variable since it doesn't under " " it prints the value that stored in that variable

    return 0;  //endl tells the compiler to start the next statement from new line.
}