#include <bits/stdc++.h>
using namespace std;

int main()
{
  list<int> l(10, 3);
  // cout << l.size() << endl;
  // cout << *l.begin() << endl;
  // for (auto it = l.begin(); it != l.end(); it++)
  // {
  //   cout << *it << endl;
  // }
  // for(int val : l){
  //   cout << val << endl;
  // }

  list<int> l2 = {1, 2, 3, 4, 5};
  int a[] = {10, 20, 30};
  list<int> l3(l2);
  list<int> l4(a, a + 3);

  for (int val : l3)
  {
    cout << val << endl;
  }

  vector<int> v = {10, 30, 50};
  list<int> l6(v.begin(), v.end());

  return 0;
};