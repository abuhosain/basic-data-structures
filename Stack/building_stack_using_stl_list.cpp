#include <bits/stdc++.h>
using namespace std;

class my_stack
{
public:
  list<int> l;
  void push(int val)
  {
    l.push_back(val);
  }
  void pop()
  {
    if (!l.empty())
    {
      l.pop_back();
    }
    else
    {
      cout << "Stack is empty, cannot pop." << endl;
    }
  }

  int top()
  {
    if (!l.empty())
    {
      return l.back();
    }
  }

  int size()
  {
    return l.size();
  }

  bool empty()
  {
    return l.empty();
  }
};

int main()
{
  my_stack st;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    st.push(x);
  }
  while (st.empty() == false)
  {
    cout << st.top() << endl;
    st.pop();
  }

  return 0;
};