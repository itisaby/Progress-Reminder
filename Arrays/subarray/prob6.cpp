
 // Definition for singly-linked list.

 #include<iostream>
 using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 

 // Cycle detection part 2
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head){
            return head;
        }
        ListNode* first = head;
        ListNode* second = head;
        ListNode* third = head;
        int pos;
         
        while(second && second->next){
            if(first->next == NULL){
                return NULL;
            }
            first = first->next;
            second = second->next->next;
            if(first == second){
                while(third!=first){
                    third = third->next;
                    first = first->next;
                }
                return third;
            }
        }
        return NULL;
    }
};