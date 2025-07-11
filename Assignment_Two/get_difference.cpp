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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
  Node *newNode = new Node(val);
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
  }
  else
  {
    tail->next = newNode;
    tail = newNode;
  }
}

int main()
{
  Node *head = NULL;
  Node *tail = NULL;

  int x;
  while (cin >> x && x != -1)
  {
    insert_at_tail(head, tail, x);
  }

  int minVal = INT_MAX;
  int maxVal = INT_MIN;

  Node *tmp = head;
  while (tmp != NULL)
  {
    minVal = min(minVal, tmp->val);
    maxVal = max(maxVal, tmp->val);
    tmp = tmp->next;
  }

  cout << maxVal - minVal << endl;

  return 0;
}
