#include <bits/stdc++.h>
using namespace std;

int main(){
   queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    };
    cout << q.front() << " " << q.back() << " " << q.size() << endl;

   return 0;
};