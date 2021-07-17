//
// Merge two sorted linked lists and return it as a sorted list. The list should be made by splicing together the nodes of the first two lists.

 

// Example 1:


// Input: l1 = [1,2,4], l2 = [1,3,4]
// Output: [1,1,2,3,4,4]
// Example 2:

// Input: l1 = [], l2 = []
// Output: []
// Example 3:

// Input: l1 = [], l2 = [0]
// Output: [0]
 

// Constraints:

// The number of nodes in both lists is in the range [0, 50].
// -100 <= Node.val <= 100
// Both l1 and l2 are sorted in non-decreasing order.

#include<iostream>
using namespace std;
//  Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next){}
                                                  
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *dummy = new ListNode(-1); //Dummy Node
        ListNode *p1 = l1;
        ListNode *p2 = l2;
        ListNode *p3 = dummy;
        while (p1 != NULL && p2 != NULL)
        {
            if (p1->val < p2->val)
            {
                p3->next = p1;
                p1 = p1->next;
            }
            else
            {
                p3->next = p2;
                p2 = p2->next;
            }
            p3 = p3->next;
        }
        while (p1 != NULL)
        {
            p3->next = p1;
            p1 = p1->next;
            p3 = p3->next;
        }
        while (p2 != NULL)
        {
            p3->next = p2;
            p2 = p2->next;
            p3 = p3->next;
        }
        return dummy->next;
    }
};