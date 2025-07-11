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
  if (!head)
  {
    head = tail = newNode;
  }
  else
  {
    tail->next = newNode;
    tail = newNode;
  }
}

void remove_duplicates(Node *head)
{
  Node *current = head;
  while (current != NULL)
  {
    Node *runner = current;
    while (runner->next != NULL)
    {
      if (runner->next->val == current->val)
      {
        Node *dup = runner->next;
        runner->next = runner->next->next;
        delete dup;
      }
      else
      {
        runner = runner->next;
      }
    }
    current = current->next;
  }
}

void print_list(Node *head)
{
  Node *tmp = head;
  while (tmp)
  {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
  cout << endl;
}

int main()
{
  Node *head = NULL, *tail = NULL;
  int val;
  while (cin >> val && val != -1)
  {
    insert_at_tail(head, tail, val);
  }

  remove_duplicates(head);
  print_list(head);

  return 0;
}
