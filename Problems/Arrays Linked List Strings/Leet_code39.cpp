#include<bits/stdc++.h>
using namespace std;


//  Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
     int length(ListNode* node){
        int l = 0;
        while(node){
            node = node->next;
            l++;
        }
        return l;
    }
    
    ListNode* reverse(ListNode* list){
        ListNode *curr = list , *prev = NULL, *next_node = NULL;
        while(curr){
            next_node = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next_node;
        }
        return prev;
    }
    
    ListNode* addTwoNumbers(ListNode* node1, ListNode* node2) {
        ListNode *l1 = node1 , *l2 = node2;
        int len1 = length(l1) , len2 = length(l2);
        if(len1<len2)
            swap(l1,l2);
        l1 = reverse(l1);
        l2 = reverse(l2);
        ListNode* li1 = l1;
        int carry = 0;
        ListNode* before = li1;
        while(li1 && l2){
            int sum = li1->val + l2->val + carry;
            li1->val = (sum%10);
            carry = sum/10;
            before = li1;
            li1 = li1->next;
            l2 = l2->next;            
        }            
        while(li1) {
            int sum =  (li1->val+carry);            
            li1->val = sum%10;
            carry = sum/10;
            before = li1;
            li1 = li1->next;
        }
        if(carry) {
            ListNode* last = new ListNode(carry%10);
            carry /= 10;
            before->next = last;
            before = before->next;
        }
        l1 = reverse(l1);
        return l1;
    }
};