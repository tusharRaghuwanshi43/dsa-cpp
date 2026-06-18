#include <iostream>
using namespace std;

/*
---------------------------------------------------------
    Singly Linked List Implementation in C++
---------------------------------------------------------
    Operations Supported:
    1. Insert at Head
    2. Insert at Tail
    3. Insert at Any Position
    4. Delete a Node
    5. Print the List

    Note:
    The Node destructor is implemented recursively.
    Deleting a node can delete the remaining list if
    the node's next pointer is not detached first.
---------------------------------------------------------
*/

class Node
{
public:
    int data;   // Value stored in the node
    Node *next; // Pointer to the next node

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }

    /*
    -----------------------------------------------------
        Destructor

        Frees memory recursively by deleting the next
        node before deleting the current one.

        Example:
            10 -> 20 -> 30

            delete head;

        Output:
            Memory is free for node with data 30
            Memory is free for node with data 20
            Memory is free for node with data 10
    -----------------------------------------------------
    */
    ~Node()
    {
        int value = this->data;

        if (this->next != nullptr)
        {
            delete this->next;
            this->next = nullptr;
        }

        cout << "Memory is free for node with data " << value << endl;
    }
};

/*
---------------------------------------------------------
    Insert a node at the beginning of the list
---------------------------------------------------------
*/
void insertAtHead(Node *&head, int data)
{
    Node *newNode = new Node(data);

    newNode->next = head;
    head = newNode;
}

/*
---------------------------------------------------------
    Insert a node at the end of the list
---------------------------------------------------------
*/
void insertAtTail(Node *&tail, int data)
{
    Node *newNode = new Node(data);

    tail->next = newNode;
    tail = newNode;
}

/*
---------------------------------------------------------
    Print the linked list
---------------------------------------------------------
*/
void print(Node *head)
{
    if (head == nullptr)
    {
        cout << "List is empty." << endl;
        return;
    }

    Node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

/*
---------------------------------------------------------
    Insert a node at a given position

    Position starts from 1.

    Example:
        Position = 1
        Insert at Head
---------------------------------------------------------
*/
void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    // Insert at beginning
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int count = 1;

    // Reach node before desired position
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // Insert at end
    if (temp->next == nullptr)
    {
        insertAtTail(tail, data);
        return;
    }

    // Create and connect new node
    Node *nodeToInsert = new Node(data);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

/*
---------------------------------------------------------
    Delete node at a given position

    Important:
    Before deleting a node, disconnect its next pointer.

    Reason:
    The destructor recursively deletes the next node.
    If we don't set next = nullptr, the remaining
    list could get deleted unintentionally.
---------------------------------------------------------
*/
void deleteNode(int position, Node *&head)
{
    // Delete first node
    if (position == 1)
    {
        Node *temp = head;

        head = head->next;

        // Break connection before deletion
        temp->next = NULL;

        delete temp;
        return;
    }

    Node *current = head;
    Node *previous = NULL;

    int count = 1;

    while (count < position)
    {
        previous = current;
        current = current->next;
        count++;
    }

    // Remove current node from the chain
    previous->next = current->next;

    // Break connection to avoid recursive deletion
    current->next = NULL;

    delete current;
}

int main()
{
    // Create first node
    Node *node1 = new Node(10);

    // Head and tail initially point to the same node
    Node *head = node1;
    Node *tail = node1;

    cout << "Initial List:" << endl;
    print(head);

    // Insert nodes at tail
    insertAtTail(tail, 12);
    insertAtTail(tail, 15);

    cout << "\nAfter inserting at tail:" << endl;
    print(head);

    // Insert at position
    insertAtPosition(head, tail, 4, 22);

    cout << "\nAfter inserting 22 at position 4:" << endl;
    print(head);

    cout << "\nHead: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    // Delete node at position 4
    deleteNode(2, head);

    cout << "\nAfter deleting position 4:" << endl;
    print(head);

    cout << "\nHead: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
    print(head);

    /*
        Free entire linked list.

        Since destructor is recursive,
        deleting head deletes all remaining nodes.
    */
    // delete head;
    // head = NULL;
    // tail = NULL;

    return 0;
}