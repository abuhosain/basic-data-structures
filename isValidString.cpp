#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValidString(const string &s)
{
  stack<char> st;
  for (char ch : s)
  {
    if (!st.empty() && st.top() != ch)
    {
      st.pop();
    }
    else
    {
      st.push(ch);
    }
  }
  return st.empty();
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    cout << (isValidString(s) ? "YES" : "NO") << endl;
  }
  return 0;
}
