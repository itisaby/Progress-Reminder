#include<bits/stdc++.h>
using namespace std;


//   Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
       if(head==NULL || k==0)
            return head;
        
        int n=0;
        ListNode* s = head;
        while(s){
            s = s->next;
            n++;
        }
        
        k = k%n;
        // Reverse the first (n-k) nodes group of the list
        s = head;
        ListNode* p, *q;
        p = NULL;
        q = NULL;
        int count =0;
        while(s && count<(n-k)){
            q = s->next;
            s->next = p;
            p = s;
            s = q;
            count++;
        }
        // Reverse the remaining nodes group (k)
        ListNode* pseudohead = p;
        s = q;
        p = NULL;q = NULL;
        count=0;
        while(s && count<k){
            q = s->next;
            s->next = p;
            p = s;
            s = q;
            count++;
        }
        
        //link the first and the second group
        if(head)
        head->next = p;
        
        //reverse the resultant list as a whole
        s = pseudohead;
        p = NULL;
        q = NULL;
        while(s){
            q = s->next;
            s->next = p;
            p = s;
            s = q;
        }
        return p;
        
    }     
};