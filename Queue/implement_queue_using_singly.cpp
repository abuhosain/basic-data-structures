#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int val;
  Node *next;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};

class myQuee
{
public:
  Node *head = NULL;
  Node *tail = NULL;
  int sz = 0;

  void push(int val)
  {
    sz++;
    Node *newNode = new Node(val);
    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
      return;
    }
    tail->next = newNode;
    tail = newNode;
  };

  void pop()
  {
    sz--;
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    if (head == NULL)
    {
      tail = NULL;
    }
  };

  int front()
  {
    return head->val;
  };

  int back()
  {
    return tail->val;
  };

  int size()
  {
    return sz;
  };

  bool empty()
  {
    if (head == NULL)
      return true;
    else
      return false;
  }
};

int main()
{
  myQuee q;
  int n;
  cin >> n;
  for(int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    q.push(x);
  };

  cout << q.front() << " " << q.back() << " " << q.size() << endl; 

  while (!q.empty())
  {
    cout << q.front() << endl;
    q.pop();
  };
  return 0;
};