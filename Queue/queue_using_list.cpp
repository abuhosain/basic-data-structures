#include <bits/stdc++.h>
using namespace std;

class myQuee
{
public:
  list<int> l;

  void push(int val)
  {
    l.push_back(val);
  };

  void pop()
  {
    l.pop_front();
  };

  int front()
  {
    return  l.front();
  };

  int back()
  {
    return l.back();
  };

  int size()
  {
    return l.size();
  };

  bool empty()
  {
    return l.empty();
  }
};

int main()
{
  myQuee q;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    q.push(x);
  };

  cout << q.front() << " " << q.back() << " " << q.size() << endl;

  while (!q.empty())
  {
    cout << q.front() << endl;
    q.pop();
  };
  return 0;
};