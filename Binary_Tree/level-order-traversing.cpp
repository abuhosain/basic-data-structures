 #include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int val;
  Node *left;
  Node *right;
  Node(int val)
  {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};

void levelOrder(Node *root){
  queue<Node*> q;
  q.push(root);
  while (!q.empty())
  {
    Node *f = q.front();
    q.pop();
    cout << f->val << " ";
    if(f->left)
    q.push(f->left);
    if(f->right)
    q.push(f->right);
  }
  
}
  
int main()
{
  Node *root = new Node(1);
  Node *a = new Node(2);
  Node *b = new Node(3);
  Node *c = new Node(4);
  Node *d = new Node(5);
  Node *e = new Node(6);
  root->left = a;
  root->right = b;
  a->left = c;
  b->left = d;
  b->right = e;
 
levelOrder(root);
  return 0;
};