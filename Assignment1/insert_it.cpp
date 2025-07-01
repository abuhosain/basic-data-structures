#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, m, x;

  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }

  cin >> m;
  vector<int> B(m);
  for (int i = 0; i < m; i++)
  {
    cin >> B[i];
  }

  cin >> x;

  A.insert(A.begin() + x, B.begin(), B.end());

  for (int i = 0; i < A.size(); i++)
  {
    cout << A[i] << " ";
  }
  cout << endl;

  return 0;
}