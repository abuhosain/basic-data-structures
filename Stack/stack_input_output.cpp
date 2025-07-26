#include <bits/stdc++.h>
using namespace std;

class my_stack
{
public:
  vector<int> v;
  void push(int val)
  {
    v.push_back(val);
  }
  void pop()
  {
    if (!v.empty())
    {
      v.pop_back();
    }
    else
    {
      cout << "Stack is empty, cannot pop." << endl;
    }
  }

  int top()
  {
    if (!v.empty())
    {
      return v.back();
    }
  }

  int size()
  {
    return v.size();
  }

  bool empty()
  {
    return v.empty();
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