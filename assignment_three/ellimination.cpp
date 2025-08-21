#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool emptyAfterElimination(const string &s)
{
  stack<char> st;
  for (char ch : s)
  {
    if (ch == '1')
    {
      if (!st.empty() && st.top() == '0')
      {
        st.pop();
      }
      else
      {
        st.push('1');
      }
    }
    else
    {
      st.push('0');
    }
  }
  return st.empty();
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  if (!(cin >> t))
    return 0;
  while (t--)
  {
    string s;
    cin >> s;
    cout << (emptyAfterElimination(s) ? "YES" : "NO") << '\n';
  }
  return 0;
}