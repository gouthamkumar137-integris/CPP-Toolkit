#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> v = {5, 2, 9, 1, 5, 6};

    // =======================
    // SORT ASCENDING
    // =======================
    sort(v.begin(), v.end());

    cout << "Ascending Sort:\n";

    for(auto x : v) {
        cout << x << " ";
    }

    cout << endl;

    // =======================
    // SORT DESCENDING
    // =======================
    sort(v.begin(), v.end(), greater<int>());

    cout << "\nDescending Sort:\n";

    for(auto x : v) {
        cout << x << " ";
    }

    cout << endl;

    // =======================
    // BINARY SEARCH
    // =======================
    sort(v.begin(), v.end());

    cout << "\nBinary Search for 5:\n";

    if(binary_search(v.begin(), v.end(), 5)) {
        cout << "Found\n";
    }
    else {
        cout << "Not Found\n";
    }

    // =======================
    // REVERSE
    // =======================
    reverse(v.begin(), v.end());

    cout << "\nReversed Vector:\n";

    for(auto x : v) {
        cout << x << " ";
    }

    cout << endl;

    // =======================
    // MAXIMUM & MINIMUM
    // =======================
    cout << "\nMaximum Element: ";
    cout << *max_element(v.begin(), v.end()) << endl;

    cout << "Minimum Element: ";
    cout << *min_element(v.begin(), v.end()) << endl;

    // =======================
    // COUNT OCCURRENCES
    // =======================
    cout << "\nCount of 5: ";
    cout << count(v.begin(), v.end(), 5) << endl;

    return 0;
}