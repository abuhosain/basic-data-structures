#include <bits/stdc++.h>
using namespace std;

int main()
{
  list<int> l2 = {10, 20, 30};
  cout << l2.size() << endl;
  l2.resize(6, 100);
  cout << l2.size() << endl;
  if (!l2.empty())
  {
    cout << "not empty";
  }

  for (int val : l2)
  {
    cout << val << endl;
  }
  
  return 0;
};