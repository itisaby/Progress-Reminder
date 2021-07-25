#include <bits/stdc++.h>
using namespace std;


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
      ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
      {
          ListNode *temp = list1;
          int count = 0;
          while (temp)
          {
              count++;
              if (count == a)
              {
                  ListNode *prev_temp = temp->next;
                  temp->next = list2;
                  temp = prev_temp;
              }
              else if (count == b + 1)
              {
                  while (list2->next)
                  {
                      list2 = list2->next;
                  }
                  list2->next = temp->next;
                  break;
              }
              else
                  temp = temp->next;
          }
          return list1;
      }
  };