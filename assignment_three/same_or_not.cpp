#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    stack<int> st;
    queue<int> q;
 
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        st.push(val);
    }
 
    for (int i = 0; i < m; i++) {
        int val;
        cin >> val;
        q.push(val);
    }
 
    if (n != m) {
        cout << "NO" << endl;
        return 0;
    }
 
    bool isSame = true;
    while (!st.empty() && !q.empty()) {
        if (st.top() != q.front()) {
            isSame = false;
            break;
        }
        st.pop();
        q.pop();
    }

    cout << (isSame ? "YES" : "NO") << endl;

    return 0;
}
