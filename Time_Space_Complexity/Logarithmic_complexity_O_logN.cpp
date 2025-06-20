#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;
   for(int i = 1; i <= n; i *= 2){
      cout << i << " ";
   }
   return 0;
};

// O(lonN)
// if increament and decreament will increase and deacrease by multible or divided then its call logarithmic complexity
// O(logN) is a complexity class that describes algorithms that reduce the problem size by a