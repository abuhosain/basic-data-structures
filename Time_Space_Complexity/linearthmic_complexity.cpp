#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 1; j <= n; j *= 2)
    {
      cout << "Hello" << endl;
    }
  }
  return 0;
};

// // This is order of n * log(n) complexity, which is O(n log n).