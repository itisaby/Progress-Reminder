
//  Definition for singly-linked list.
#include<bits/stdc++.h>
using namespace std;

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
    int getDecimalValue(ListNode *head)
    {
        if (!head)
        {
            return -1;
        }
        if (head->next == NULL && head->val <= 1)
        {
            return head->val;
        }
        int l = 0;
        ListNode *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
            l++;
        }
        int fac = pow(2, l);
        temp = head;
        int sum = 0;
        while (temp != NULL)
        {
            sum = sum + ((temp->val) * (fac));
            fac /= 2;
            temp = temp->next;
        }
        return sum;
    }
};