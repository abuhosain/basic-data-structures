#include <bits/stdc++.h>
using namespace std;

int main()
{
  //  vector<int> v;
  //  vector<int> v(5);
  vector<int> v(5, 5);
  vector<int> v2(v);
  int a[5] = {1, 2, 3, 4, 5};
  vector<int> v3(a, a + 5);
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  vector<int> v4 = {1, 2, 3, 4};

  cout << v.size() << endl;
  return 0;
};