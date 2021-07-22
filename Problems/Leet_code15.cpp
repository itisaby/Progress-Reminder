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
    ListNode* reverse(ListNode* head, int k, int count) {
        if(count == 0) return head;
		if(head == NULL) return head;
        int c = 1;
        ListNode *H2 = NULL, *tempH1 = head;
        while(head != NULL and c<=k) {
            ListNode *temp = head;
            head = head->next;
            temp->next = H2;
            H2 = temp;
            c++;
        } 
        tempH1->next = reverse(head, k, count-1);
        return H2;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head){
            return head;
        }
        ListNode *h = head;
        int s = 0;  // size
        while(h != NULL) {
            h = h->next;
            s++;
        }
        s = s/k;  // how many time reverse will happen
        return reverse(head, k, s);
       
    }
};