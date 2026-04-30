#include <iostream>
using namespace std;

// =======================
// 1. Print All Subsets
// =======================
void printSubsets(string str, int index, string output) {
    if(index == str.length()) {
        cout << output << endl;
        return;
    }

    // Exclude current character
    printSubsets(str, index + 1, output);

    // Include current character
    printSubsets(str, index + 1, output + str[index]);
}

// =======================
// 2. Print Permutations
// =======================
void permute(string &str, int index) {
    if(index == str.length()) {
        cout << str << endl;
        return;
    }

    for(int i = index; i < str.length(); i++) {
        swap(str[index], str[i]);   // choose

        permute(str, index + 1);    // explore

        swap(str[index], str[i]);   // undo
    }
}

// =======================
// MAIN FUNCTION
// =======================
int main() {

    string str = "ABC";

    cout << "Subsets:\n";
    printSubsets(str, 0, "");

    cout << "\nPermutations:\n";
    permute(str, 0);

    return 0;
}