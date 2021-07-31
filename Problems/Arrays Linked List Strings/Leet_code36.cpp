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
    ListNode* partition(ListNode* head, int x) {
        if(!head){
            return head;
        }
        ListNode* beforex = new ListNode(-1);
        ListNode* before = beforex;
        ListNode* afterx = new ListNode(-1);
        ListNode* after = afterx;
        while(head){
            if(head->val<x){
                beforex->next = head;
                beforex = beforex->next;
            }
            else{
                afterx->next = head;
                afterx = afterx->next; 
            }
            head=head->next;
        }
        beforex->next=after->next;
        afterx->next = NULL;
        
        return before->next;      
            
    }
};