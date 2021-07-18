
 // Definition for singly-linked list.
 // Cycle detection
 #include <iostream>
 using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head){
            return head;
        }
        ListNode* first = head;
        ListNode* second = head;
        
        while(second && second->next){
            first = first->next;
            second = second->next->next;
            if(first == second){
                return true;
            }
        }
        return false;
    }
};