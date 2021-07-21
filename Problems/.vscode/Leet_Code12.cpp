#include<iostream>
using namespace std;
//   Definition for singly-linked list.
 struct ListNode
  {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

  class Solution
  {
  public:
      int length(ListNode *head)
      {
          int ct = 0;
          while (head->next)
          {
              ct++;
              head = head->next;
          }
          return ct;
      }
      ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
      {
          if (!headA)
          {
              return headA;
          }
          if (!headB)
          {
              return headB;
          }
          int l1 = length(headA);
          int l2 = length(headB);
          int l;
          ListNode *temp1;
          ListNode *temp2;
          if (l1 > l2)
          {
              l = l1 - l2;
              temp1 = headA;
              temp2 = headB;
          }
          else
          {
              l = l2 - l1;
              temp1 = headB;
              temp2 = headA;
          }
          while (l)
          {
              temp1 = temp1->next;
              if (temp1 == NULL)
              {
                  return NULL;
              }
              l--;
          }
          while (temp1 && temp2)
          {
              if (temp1 == temp2)
              {
                  return temp1;
              }
              temp1 = temp1->next;
              temp2 = temp2->next;
          }

          return NULL;
      }
  };