#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<long long> a(n);
  vector<long long> prefix(n);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (i == 0)
      prefix[i] = a[i];
    else
      prefix[i] = prefix[i - 1] + a[i];
  }

  for (int i = n - 1; i >= 0; i--)
  {
    cout << prefix[i] << " ";
  }

  cout << endl;
  return 0;
}
