//  Definition for singly-linked list. 
#include<iostream>
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
     ListNode *removeElements(ListNode *head, int val)
     {
         ListNode *dummy = new ListNode(0);
         dummy->next = head;
         ListNode *temp = dummy;
         while (head != NULL && head->val == val)
         {
             head = head->next;
         }
         if (!head)
         {
             return head;
         }
         while (temp && temp->next)
         {
             if (temp->next->val == val)
             {
                 ListNode *delp = temp->next;
                 temp->next = delp->next;
                 delete delp;
             }
             else
             {
                 temp = temp->next;
             }
         }
         return dummy->next;
     }
 };