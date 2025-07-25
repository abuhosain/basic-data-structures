#include <bits/stdc++.h>
using namespace std;

int main(){
   list<int> l = {10, 20, 30, 40, 50, 60};
   l.remove(20);  

   for(int val: l) {
       cout << val << endl;
   }
   return 0;
};