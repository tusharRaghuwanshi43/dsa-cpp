/*
Problem Link - https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1
Problem Name - Sort a linked list of 0s, 1s and 2s
Level - Medium
Description - Given the head of a linked list where nodes can contain values 0s, 1s, and 2s only. Your task is to rearrange the list so that all 0s appear at the beginning, followed by all 1s, and all 2s are placed at the end.
Examples:

Input: head = 1 → 2 → 2 → 1 → 2 → 0 → 2 → 2
Output: 0 → 1 → 1 → 2 → 2 → 2 → 2 → 2
Explanation: All the 0s are segregated to the left end of the linked list, 2s to the right end of the list, and 1s in between. The final list will be:

Input: head = 2 → 2 → 0 → 1
Output: 0 → 1 → 2 → 2
Explanation: After arranging all the 0s, 1s and 2s in the given format, the output will be:

Constraints:
1 ≤ no. of nodes ≤ 106
0 ≤ node->data ≤ 2
*/

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
    Node() : val(0), next(nullptr) {}
    Node(int x) : val(x), next(nullptr) {}
    Node(int x, Node *next) : val(x), next(next) {}
};
class Solution
{
public:
    void insertAtTail(Node *&tail, Node *curr)
    {
        tail->next = curr;
        tail = curr;
    }

    Node *segregate(Node *head)
    {
        if (head == NULL || head->next == NULL)
            return head;

        // Dummy nodes
        Node *zero = new Node(-1);
        Node *one = new Node(-1);
        Node *two = new Node(-1);

        Node *zeroTail = zero;
        Node *oneTail = one;
        Node *twoTail = two;

        Node *temp = head;

        // Divide nodes into three lists
        while (temp != NULL)
        {
            if (temp->val == 0)
                insertAtTail(zeroTail, temp);
            else if (temp->val == 1)
                insertAtTail(oneTail, temp);
            else
                insertAtTail(twoTail, temp);

            temp = temp->next;
        }

        // Merge the lists

        // Connect 0s list with 1s list if present,
        // otherwise connect directly with 2s list.
        if (one->next != NULL)
            zeroTail->next = one->next;
        else
            zeroTail->next = two->next;

        // Connect 1s list with 2s list
        oneTail->next = two->next;

        // End the final list
        twoTail->next = NULL;

        // New head
        head = zero->next;

        // Free dummy nodes
        delete zero;
        delete one;
        delete two;

        return head;
    }
};