
//   Definition for singly-linked list.
#include<bits/stdc++.h>
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
    ListNode *ReverseList(ListNode *&head)
    {
        ListNode *temp = head;
        ListNode *prev = NULL;
        ListNode *curr = NULL;
        while (temp)
        {
            curr = temp->next;
            temp->next = prev;
            prev = temp;
            temp = curr;
        }
        head = prev;
        return head;
    }
    bool isPalindrome(ListNode *head)
    {
        if (!head || !head->next)
        {
            return true;
        }
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *prev = slow;
        while (fast && fast->next)
        {
            prev = slow;
            fast = fast->next->next;
            slow = slow->next;
        }
        prev->next = NULL;
        slow = ReverseList(slow);
        while (head && slow)
        {
            if (head->val != slow->val)
            {
                return false;
            }
            head = head->next;
            slow = slow->next;
        }
        return true;
    }
};