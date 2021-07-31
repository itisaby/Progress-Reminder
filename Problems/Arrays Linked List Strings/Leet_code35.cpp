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
    int length(ListNode* head){
        int ct=0;
        ListNode*temp = head;
        while(temp){
            ct++;
            temp = temp->next;
        }
        return ct;
    }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> out;
        int l = length(head);
        int extra = l%k;
        int i = k ;
        while(i>0){
            int n;
            if(extra>0){
                n = (l/k) + 1;
            }
            else{
                n = l/k;
            }
            ListNode* temp = NULL;
            ListNode* ptr = NULL;
            while(n>0 && head){
                if(ptr == NULL){
                    ptr = new ListNode(head->val);
                    temp = ptr;
                }
                else{
                    ptr->next = new ListNode(head->val);
                    ptr = ptr->next;
                }
                head = head->next;
                n--;
            }
            out.push_back(temp);
            i--;
            extra--;
        }
        return out;
    }
};