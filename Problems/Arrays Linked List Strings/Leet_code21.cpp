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
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *ans = new ListNode(0);
        ListNode *ansHead = ans;
        while (head)
        {
            if (head->next && head->val == head->next->val)
            {
                int j = head->val;
                head = head->next;
                while (head && head->val == j)
                {
                    head = head->next;
                }
            }
            else
            {
                ans->next = new ListNode(head->val);
                head = head->next;
                ans = ans->next;
            }
        }
        return ansHead->next;
    }
};