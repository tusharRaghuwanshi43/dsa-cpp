// Approach 1 - map approach

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        if (head == NULL)
        {
            return 0;
        }
        map<ListNode *, bool> visited;
        while (head != NULL)
        {
            if (visited[head] == true)
            {
                return 1;
            }
            visited[head] = true;
            head = head->next;
        }
        return 0;
    }
};

// Approach 2 - Optimal - Floyd's Cycle detection algorithm
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return 0;
        }

        ListNode *slow = head;
        ListNode *fast = head;
        while (slow != NULL && fast != NULL)
        {
            fast = fast->next;
            if (fast != NULL)
            {
                fast = fast->next;
            }
            slow = slow->next;

            if (slow == fast)
            {
                return 1;
            }
        }
        return 0;
    }
};