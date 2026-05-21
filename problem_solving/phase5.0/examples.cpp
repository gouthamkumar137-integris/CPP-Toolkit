#include <iostream>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

// =======================
// 1. Frequency Counter
// =======================
void frequencyCount(vector<int> arr) {

    map<int, int> freq;

    for(int x : arr) {
        freq[x]++;
    }

    cout << "Frequency Count:\n";

    for(auto p : freq) {
        cout << p.first << " -> " << p.second << endl;
    }
}

// =======================
// 2. Duplicate Detection
// =======================
bool hasDuplicate(vector<int> arr) {

    set<int> s;

    for(int x : arr) {

        if(s.count(x))
            return true;

        s.insert(x);
    }

    return false;
}

// =======================
// 3. Balanced Parentheses
// =======================
bool isBalanced(string str) {

    stack<char> st;

    for(char ch : str) {

        if(ch == '(')
            st.push(ch);

        else if(ch == ')') {

            if(st.empty())
                return false;

            st.pop();
        }
    }

    return st.empty();
}

// =======================
// 4. Queue Simulation
// =======================
void queueExample() {

    queue<string> q;

    q.push("A");
    q.push("B");
    q.push("C");

    cout << "\nQueue Front: " << q.front() << endl;

    q.pop();

    cout << "After pop Front: " << q.front() << endl;
}

// =======================
// MAIN FUNCTION
// =======================
int main() {

    vector<int> arr = {1, 2, 2, 3, 1};

    // Frequency Count
    frequencyCount(arr);

    // Duplicate Detection
    cout << "\nDuplicate Present: ";

    if(hasDuplicate(arr))
        cout << "Yes\n";
    else
        cout << "No\n";

    // Balanced Parentheses
    string str = "(())";

    cout << "\nBalanced Parentheses: ";

    if(isBalanced(str))
        cout << "Balanced\n";
    else
        cout << "Not Balanced\n";

    // Queue Example
    queueExample();

    return 0;
}