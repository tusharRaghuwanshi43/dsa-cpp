/*
Problem Link - https://leetcode.com/problems/reverse-linked-list/description/
Problem Name - 206. Reverse Linked List
Level - Easy
Description - Given the head of a singly linked list, reverse the list, and return the reversed list.

Example 1:
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

Example 2:
Input: head = [1,2]
Output: [2,1]
Example 3:
Input: head = []
Output: []

Constraints:
The number of nodes in the list is the range [0, 5000].
-5000 <= Node.val <= 5000
*/

#include <bits/stdc++.h>
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
    void reverse(ListNode *&head, ListNode *curr, ListNode *prev)
    {

        // Base case
        if (curr == NULL)
        {
            head = prev;
            return;
        }
        ListNode *forward = curr->next;
        curr->next = prev;
        reverse(head, forward, curr);
    }
    ListNode *reverseList(ListNode *head)
    {
        ListNode *curr = head;
        ListNode *prev = NULL;
        reverse(head, curr, prev);
        return head;
    }
};