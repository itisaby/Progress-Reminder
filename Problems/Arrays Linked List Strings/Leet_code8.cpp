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
     int length(ListNode *head)
     {
         ListNode *temp = head;
         int ct = 0;
         while (temp)
         {
             ct++;
             temp = temp->next;
         }
         return ct;
     }

     ListNode *middleNode(ListNode *head)
     {
         if (!head)
         {
             return head;
         }
         int l = (length(head)) / 2;
         ListNode *ptr = head;
         while (l && ptr)
         {
             ptr = ptr->next;
             l--;
         }
         head = ptr;
         return head;
     }
 };