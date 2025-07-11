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

bool are_equal(Node *head1, Node *head2)
{
  while (head1 != NULL && head2 != NULL)
  {
    if (head1->val != head2->val)
      return false;
    head1 = head1->next;
    head2 = head2->next;
  }
  return head1 == NULL && head2 == NULL;
}

int main()
{
  Node *head1 = NULL, *tail1 = NULL;
  Node *head2 = NULL, *tail2 = NULL;

  string line1;
  getline(cin, line1);
  stringstream ss1(line1);
  int val;
  while (ss1 >> val && val != -1)
  {
    insert_at_tail(head1, tail1, val);
  }

  string line2;
  getline(cin, line2);
  stringstream ss2(line2);
  while (ss2 >> val && val != -1)
  {
    insert_at_tail(head2, tail2, val);
  }

  if (are_equal(head1, head2))
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }

  return 0;
}
