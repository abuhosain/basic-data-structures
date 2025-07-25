#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int val;
  Node *next;
  Node *prev;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
    this->prev = NULL;
  }
};

void print_left_to_right(Node *head)
{
  cout << "L -> ";
  Node *tmp = head;
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    if (tmp->next == NULL)
      break;
    tmp = tmp->next;
  }
  cout << endl;
}

void print_right_to_left(Node *tail)
{
  cout << "R -> ";
  Node *tmp = tail;
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    tmp = tmp->prev;
  }
  cout << endl;
}

int get_size(Node *head)
{
  int count = 0;
  Node *tmp = head;
  while (tmp != NULL)
  {
    count++;
    tmp = tmp->next;
  }
  return count;
}

void insert_at_index(Node *&head, Node *&tail, int idx, int val)
{
  int size = get_size(head);
  if (idx < 0 || idx > size)
  {
    cout << "Invalid" << endl;
    return;
  }

  Node *newNode = new Node(val);

  if (idx == 0)
  {

    newNode->next = head;
    if (head != NULL)
      head->prev = newNode;
    head = newNode;
    if (tail == NULL)
      tail = newNode;
  }
  else if (idx == size)
  {

    newNode->prev = tail;
    if (tail != NULL)
      tail->next = newNode;
    tail = newNode;
    if (head == NULL)
      head = newNode;
  }
  else
  {
    Node *tmp = head;
    for (int i = 0; i < idx - 1; i++)
    {
      tmp = tmp->next;
    }
    newNode->next = tmp->next;
    newNode->prev = tmp;
    tmp->next->prev = newNode;
    tmp->next = newNode;
  }

  print_left_to_right(head);
  print_right_to_left(tail);
}

int main()
{
  Node *head = NULL;
  Node *tail = NULL;

  int Q;
  cin >> Q;

  for (int i = 0; i < Q; i++)
  {
    int idx, val;
    cin >> idx >> val;
    insert_at_index(head, tail, idx, val);
  }

  return 0;
}
