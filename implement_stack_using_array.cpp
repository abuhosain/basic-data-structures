#include <bits/stdc++.h>
using namespace std;

class MyStck
{
public:
   vector<int> v;
   void push(int val)
   {
      v.push_back(val);
   }
   void pop()
   {
      if (!v.empty())
      {
         v.pop_back();
      }
      else
      {
         cout << "Stack is empty, cannot pop." << endl;
      }
   }

 
};

int main()
{

   return 0;
};