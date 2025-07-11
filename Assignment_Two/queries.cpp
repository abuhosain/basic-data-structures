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

void insert_at_head(Node *&head, Node *&tail, int val)
{
  Node *newNode = new Node(val);
  newNode->next = head;
  head = newNode;
  if (tail == NULL)
  {
    tail = newNode;
  }
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
  Node *newNode = new Node(val);
  if (head == NULL)
  {
    head = tail = newNode;
  }
  else
  {
    tail->next = newNode;
    tail = newNode;
  }
}

void delete_at_index(Node *&head, Node *&tail, int index)
{
  if (head == NULL)
    return;

  if (index == 0)
  {
    Node *delNode = head;
    head = head->next;
    delete delNode;
    if (head == NULL)
      tail = NULL;
    return;
  }

  Node *tmp = head;
  for (int i = 0; i < index - 1; i++)
  {
    if (tmp->next == NULL)
      return;
    tmp = tmp->next;
  }

  if (tmp->next == NULL)
    return;

  Node *delNode = tmp->next;
  tmp->next = tmp->next->next;
  if (tmp->next == NULL)
    tail = tmp;
  delete delNode;
}

void print_list(Node *head)
{
  Node *tmp = head;
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
  cout << endl;
}

int main()
{
  int Q;
  cin >> Q;

  Node *head = NULL;
  Node *tail = NULL;

  for (int i = 0; i < Q; i++)
  {
    int X, V;
    cin >> X >> V;

    if (X == 0)
    {
      insert_at_head(head, tail, V);
    }
    else if (X == 1)
    {
      insert_at_tail(head, tail, V);
    }
    else if (X == 2)
    {
      delete_at_index(head, tail, V);
    }

    print_list(head);
  }

  return 0;
}
