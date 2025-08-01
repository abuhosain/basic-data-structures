/**
 * LeetCode Problem: remove-duplicates-from-sorted-list
 */
#include <cstddef>

struct ListNode
{
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
  ListNode *deleteDuplicates(ListNode *head)
  {
    if (head == NULL)
      return head;
    ListNode *tmp = head;
    while (tmp->next != NULL)
    {
      if (tmp->val == tmp->next->val)
        tmp->next = tmp->next->next;
      else
        tmp = tmp->next;
    }
    return head;
  }
};