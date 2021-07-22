#include <bits/stdc++.h>
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
    ListNode *swapPairs(ListNode *head)
    {
        if (!head)
        {
            return head;
        }
        ListNode *Dummy = new ListNode(-1);
        Dummy->next = head;
        ListNode *temp = Dummy->next;
        while (temp->next != NULL)
        {
            swap(temp->val, temp->next->val);
            if (temp->next->next != NULL)
            {
                temp = temp->next->next;
            }
            else
            {
                temp = temp->next;
            }
        }
        return Dummy->next;
    }
};