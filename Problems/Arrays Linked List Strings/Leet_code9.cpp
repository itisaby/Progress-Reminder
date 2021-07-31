#include<iostream>
using namespace std;
//  Definition for singly-linked list.
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
     ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
     {
         ListNode *dummyNode = new ListNode(-1); // Dummy Node Initialised
         ListNode *currNode = dummyNode;
         int currSum = 0, carry = 0;
         while (l1 or l2)
         {
             currSum = 0;
             if (l1)
             {
                 currSum += l1->val;
                 l1 = l1->next;
             }
             if (l2)
             {
                 currSum += l2->val;
                 l2 = l2->next;
             }
             currSum += carry;
             carry = currSum / 10;
             currNode->next = new ListNode(currSum % 10);
             currNode = currNode->next;
         }
         if (carry)
         {
             currNode->next = new ListNode(carry);
         }
         return dummyNode->next;
     }
 };