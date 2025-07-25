#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  string val;
  Node *next;
  Node *prev;
  Node(string val)
  {
    this->val = val;
    this->next = NULL;
    this->prev = NULL;
  }
};

void insert(Node *&head, Node *&tail, string val)
{
  Node *newNode = new Node(val);
  if (head == NULL)
  {
    head = tail = newNode;
  }
  else
  {
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
  }
}

Node *find(Node *head, string val)
{
  while (head != NULL)
  {
    if (head->val == val)
      return head;
    head = head->next;
  }
  return NULL;
}

int main()
{
  Node *head = NULL;
  Node *tail = NULL;

  string val;
  while (cin >> val && val != "end")
  {
    insert(head, tail, val);
  }

  Node *current = head;

  int q;
  cin >> q;
  cin.ignore();

  while (q--)
  {
    string line;
    getline(cin, line);
    stringstream ss(line);

    string cmd, arg;
    ss >> cmd;

    if (cmd == "visit")
    {
      ss >> arg;
      Node *target = find(head, arg);
      if (target != NULL)
      {
        current = target;
        cout << current->val << endl;
      }
      else
      {
        cout << "Not Available" << endl;
      }
    }
    else if (cmd == "next")
    {
      if (current->next != NULL)
      {
        current = current->next;
        cout << current->val << endl;
      }
      else
      {
        cout << "Not Available" << endl;
      }
    }
    else if (cmd == "prev")
    {
      if (current->prev != NULL)
      {
        current = current->prev;
        cout << current->val << endl;
      }
      else
      {
        cout << "Not Available" << endl;
      }
    }
  }

  return 0;
}
