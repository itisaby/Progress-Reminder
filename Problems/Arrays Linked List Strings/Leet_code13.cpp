#include <bits/stdc++.h>
using namespace std;

//   Definition for singly-linked list.
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
    ListNode *swapNodes(ListNode *head, int k)
    {
        ListNode *first = head;
        ListNode *second = head;
        int i = k - 1;
        while (i-- && first)
        {
            first = first->next;
        }
        ListNode *temp = first;
        while (first->next)
        {
            first = first->next;
            second = second->next;
        }
        swap(temp->val, second->val);
        return head;
    }
};