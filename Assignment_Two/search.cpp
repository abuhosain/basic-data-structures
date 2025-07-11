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

int find_index(Node *head, int x)
{
  int index = 0;
  Node *tmp = head;
  while (tmp != NULL)
  {
    if (tmp->val == x)
      return index;
    tmp = tmp->next;
    index++;
  }
  return -1;
}

int main()
{
  int T;
  cin >> T;
  cin.ignore();

  while (T--)
  {
    Node *head = NULL;
    Node *tail = NULL;

    string line;
    getline(cin, line);
    stringstream ss(line);

    int val;
    while (ss >> val && val != -1)
    {
      insert_at_tail(head, tail, val);
    }

    int x;
    cin >> x;
    cin.ignore();

    cout << find_index(head, x) << endl;

    Node *tmp;
    while (head != NULL)
    {
      tmp = head;
      head = head->next;
      delete tmp;
    }
  }

  return 0;
}
