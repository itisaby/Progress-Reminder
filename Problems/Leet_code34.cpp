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
    ListNode* oddEvenList(ListNode* head) {
       if(head == nullptr || head->next==nullptr || head->next->next == nullptr){
            return head;
        }
        ListNode* even=head->next;
        ListNode *node1=head, *node2=even;
        while(node1 != nullptr && node1->next != nullptr && node2 != nullptr && node2->next != nullptr){
            node1->next=node1->next->next;
            node2->next=node2->next->next;
            node1=node1->next;
            node2=node2->next;
        }
        if(node1)
            node1->next=nullptr;
        if(node2)
            node2->next=nullptr;
        node1=head;
        while(node1->next != nullptr){
            node1=node1->next;
        }
        node1->next=even;
        return head;
        
    }
};