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
  Node *newnode = new Node(val);
  if (head == NULL)
  {
    head = newnode;
    tail = newnode;
    return;
  }
  tail->next = newnode;
  tail = newnode;
}

void reverse(Node *&head, Node *tmp)
{
  if (tmp->next == NULL)
  {
    head = tmp;
    return;
  }
  reverse(head, tmp->next);
  tmp->next->next = tmp;
  tmp->next = NULL;
}

bool isPalindrome(Node *head)
{
  Node *newhead = NULL;
  Node *newtail = NULL;

  Node *tmp = head;
  while (tmp != NULL)
  {
    insert_at_tail(newhead, newtail, tmp->val);
    tmp = tmp->next;
  }

  reverse(newhead, newhead);

  tmp = head;
  Node *tmp2 = newhead;

  while (tmp != NULL)
  {
    if (tmp->val != tmp2->val)
    {
      return false;
    }
    tmp = tmp->next;
    tmp2 = tmp2->next;
  }

  return true;
}

int main()
{
  Node *head = NULL, *tail = NULL;
  int val;

  while (cin >> val && val != -1)
  {
    insert_at_tail(head, tail, val);
  }

  if (isPalindrome(head))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
