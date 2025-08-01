/**
 * LeetCode Problem: Palindrome Linked List
 */

#include <cstddef>

struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
  void insert_at_tail(ListNode *&head, ListNode *&tail, int val)
  {
    ListNode *newnode = new ListNode(val);
    if (head == NULL)
    {
      head = newnode;
      tail = newnode;
      return;
    }
    tail->next = newnode;
    tail = newnode;
  };

  void reverse(ListNode *&head, ListNode *tmp)
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

  bool isPalindrome(ListNode *head)
  {
    ListNode *newhead = NULL;
    ListNode *newtail = NULL;

    ListNode *tmp = head;
    while (tmp != NULL)
    {
      insert_at_tail(newhead, newtail, tmp->val);
      tmp = tmp->next;
    }

    reverse(newhead, newhead);
    tmp = head;
    ListNode *tmp2 = newhead;

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
};