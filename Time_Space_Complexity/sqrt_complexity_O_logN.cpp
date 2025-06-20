#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
    cin >> n;
    // for(int i = 1; i <= sqrt(n); i++){
    //   cout << i << " ";
    // }
    for(int i = 1; i <= sqrt(n); i++){
      if(n % i == 0){
        cout << i << " " << n / i << " ";
      }
    }
   return 0;
};

// This is order of sqrt(n) complexity, which is O(sqrt(n)).