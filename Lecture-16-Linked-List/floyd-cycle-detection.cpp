#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

// Insert at end
void insertAtTail(Node *&head, Node *&tail, int d)
{

    Node *temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    tail->next = temp;
    tail = temp;
}

// Print Linked List
void print(Node *head)
{
    if (head == NULL)
    {
        cout << "LL is empty! " << endl;
        return;
    }
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Floyd Cycle Detection
Node *floydDetectLoop(Node *head)
{
    if (head == NULL)
        return NULL;

    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;
        if (fast->next != NULL)
        {
            fast = fast->next;
        }
        if (slow == fast)
            return slow;
    }
    return NULL;
}

// Find Starting Node
Node *getStartingNode(Node *head)
{
    Node *intersection = floydDetectLoop(head);
    if (intersection == NULL)
        return NULL;

    Node *slow = head;
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

// Remove Loop
Node *removeLoop(Node *head)
{
    Node *start = getStartingNode(head);
    if (start == NULL)
        return head;

    Node *temp = start;
    while (temp->next != start)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    return head;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);

    // Create Loop
    tail->next = head->next; // 50 -> 20
    if (floydDetectLoop(head))
        cout << "Loop Detected\n";
    else
        cout << "No Loop\n";
    removeLoop(head);
    if (floydDetectLoop(head))
        cout << "Loop Detected\n";
    else
        cout << "No Loop\n";
    cout << "Linked List after removing loop:\n";
    print(head);
    return 0;
}