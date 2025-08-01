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
  tail = tail->next;
}

void print_link_list(Node *head)
{
  Node *tmp = head;
  while (tmp != NULL)
  {
    cout << tmp->val << endl;
    tmp = tmp->next;
  }
}

void delet_at_any(Node *head, int idx)
{
  Node *tmp = head;
  for (int i = 1; i < idx; i++)
  {
    tmp = tmp->next;
  }
  Node *deleteNode = tmp->next;

  tmp->next = tmp->next->next;

  delete deleteNode;
}

int main()
{
  Node *head = NULL;
  Node *tail = NULL;

  int val;
  while (true)
  {
    cin >> val;
    if (val == -1)
    {
      break;
    }
    insert_at_tail(head, tail, val);
  }

  delet_at_any(head, 5);

  print_link_list(head);
  return 0;
};