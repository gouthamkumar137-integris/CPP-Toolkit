#include <iostream>
#include <set>
#include <map>
#include <stack>
#include <queue>
using namespace std;

int main() {

    // =======================
    // SET
    // =======================
    set<int> s;

    s.insert(10);
    s.insert(5);
    s.insert(10);

    cout << "Set Elements:\n";
    for(auto x : s) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Count 10: " << s.count(10) << endl;

    s.erase(5);

    cout << "After erase:\n";
    for(auto x : s) {
        cout << x << " ";
    }
    cout << endl;

    // =======================
    // MAP
    // =======================
    map<int, string> m;

    m[1] = "Apple";
    m[2] = "Banana";
    m[3] = "Mango";

    cout << "\nMap Elements:\n";
    for(auto p : m) {
        cout << p.first << " -> " << p.second << endl;
    }

    cout << "Count key 2: " << m.count(2) << endl;

    m.erase(1);

    // =======================
    // STACK
    // =======================
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "\nStack Top: " << st.top() << endl;

    st.pop();

    cout << "After pop Top: " << st.top() << endl;

    // =======================
    // QUEUE
    // =======================
    queue<int> q;

    q.push(100);
    q.push(200);
    q.push(300);

    cout << "\nQueue Front: " << q.front() << endl;
    cout << "Queue Back: " << q.back() << endl;

    q.pop();

    cout << "After pop Front: " << q.front() << endl;

    return 0;
}