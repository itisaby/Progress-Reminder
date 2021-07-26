#include<bits/stdc++.h>
using namespace std;


class MyLinkedList {
public:
    struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(NULL) {}
      ListNode(int x) : val(x), next(NULL) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
    ListNode *head;
    ListNode *tail;
    int count;
    /** Initialize your data structure here. */
    MyLinkedList() {
        head = NULL;
        tail = NULL;
        count = 0;
    }

    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        ListNode *tmp = head;
        while(true){
        if(!tmp) return -1;
        if(!index) return tmp->val;
        index--;
        tmp=tmp->next;
        }
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        if(!head){
            head = new ListNode(val,head);
            tail = head;
        }
        else head = new ListNode(val,head);
        count++;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        if(!tail){
            head = new ListNode(val,head);
            tail = head;
        }
        else {tail->next = new ListNode(val);
        tail=tail->next;}
        count++;
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if(index<=count){
            if(index == count){
                if(!tail){
                    head = new ListNode(val,head);
                    tail = head;
                }
                else{tail->next = new ListNode(val);
                tail=tail->next;}
            }
            else{
                ListNode *tmp = head;
                if(index == 0) {
                    if(!head){
                    head = new ListNode(val,head);
                    tail = head;
                    }
                    else head = new ListNode(val,head);
                }
                else{
                    while(true){
                        if(--index == 0){
                            tmp->next = new ListNode(val,tmp->next);
                            break;
                        }
                        tmp=tmp->next;
                    }
                }
            }
            count++;
        }
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if(index<count){
            if (count == 1){
                delete head;
                head = NULL;
                tail = NULL;
                count = 0;
                return;
            }
            if(index == 0){
                ListNode *tmp=head->next;
                delete head;
                head = tmp;
                count--;
                return;
            }
            if(index == count-1){
                ListNode *tmp=head;
                while(--index) tmp=tmp->next;
                delete tail;
                tail = tmp;
                tail->next = NULL;
                count--;
                return;
            }
            ListNode *tmp=head;
            while(--index) tmp=tmp->next;
            ListNode *cur=tmp->next;
            tmp->next=cur->next;
            delete cur;
            count--;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */