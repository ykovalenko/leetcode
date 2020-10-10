/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// O(N+M)
// O(1)

class Solution {
public:
  ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
  {
    ListNode fake(-1);
    ListNode* last = &fake;
    while (l1 != nullptr && l2 != nullptr)
    {
      if (l1->val < l2->val)
      {
        last->next = l1;
        last = l1;
        l1 = l1->next;
      }
      else
      {
        last->next = l2;
        last = l2;
        l2 = l2->next;
      }
    }

    if (l1 != nullptr)
      last->next = l1;

    if (l2 != nullptr)
      last->next = l2;

    return fake.next;
  }
};


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
  ListNode* mergeTwoLists(ListNode* _l1, ListNode* _l2)
  {
    if (nullptr == _l1)
      return _l2;
    if (nullptr == _l2)
      return _l1;

    ListNode* answers = nullptr;
    ListNode* answers_current = nullptr;

    ListNode* l1 = _l1;
    ListNode* l2 = _l2;
    int value;
    while (l1 != nullptr && l2 != nullptr)
    {
      if (l1->val < l2->val)
      {
        value = l1->val;
        l1 = l1->next;
      }
      else
      {
        value = l2->val;
        l2 = l2->next;
      }

      if (nullptr == answers)
      {
        answers = new ListNode(value);
        answers_current = answers;
      }
      else
      {
        answers_current->next = new ListNode(value);
        answers_current = answers_current->next;
      }
    }
    
    if (l1 != nullptr)
    {
      if (nullptr == answers)
        answers = l1;
      else
        answers_current->next = l1;
    }

    if (l2 != nullptr)
    {
      if (nullptr == answers)
        answers = l2;
      else
        answers_current->next = l2;
    }

    return answers;
  }
};