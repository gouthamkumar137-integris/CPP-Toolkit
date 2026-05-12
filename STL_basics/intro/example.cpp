#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {

    // =======================
    // VECTOR
    // =======================
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Vector Elements:\n";

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;

    // Size
    cout << "Size: " << v.size() << endl;

    // Front and Back
    cout << "Front: " << v.front() << endl;
    cout << "Back: " << v.back() << endl;

    // Pop element
    v.pop_back();

    cout << "After pop_back:\n";

    for(auto x : v) {
        cout << x << " ";
    }

    cout << endl;

    // =======================
    // PAIR
    // =======================
    pair<int, string> p;

    p = {1, "Gowtham"};

    cout << "\nPair Example:\n";
    cout << p.first << " ";
    cout << p.second << endl;

    // =======================
    // ITERATORS
    // =======================
    cout << "\nUsing Iterator:\n";

    vector<int>::iterator it;

    for(it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;

    // =======================
    // AUTO KEYWORD
    // =======================
    cout << "\nUsing Auto:\n";

    for(auto value : v) {
        cout << value << " ";
    }

    cout << endl;

    return 0;
}