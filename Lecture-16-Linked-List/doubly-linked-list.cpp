#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

// trasversing the doubly linked list
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// length of the dll
int length(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

// inserting at head
void insertAthead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

// inserting at tail
void insertAttail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

// inserting at position
void insertAtposition(Node *&tail, Node *&head, int position, int d)
{

    // insert at start
    if (position == 1)
    {
        insertAthead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // insert at last
    if (temp->next == NULL)
    {
        insertAttail(tail, d);
    }

    // creating a node
    Node *nodeToinsert = new Node(d);
    nodeToinsert->next = temp->next;
    temp->next->prev = nodeToinsert;
    temp->next = nodeToinsert;
    nodeToinsert->prev = temp;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    int len = length(head);
    cout << "Lenght of the dll " << len << endl;
    insertAthead(head, 12);
    insertAthead(head, 13);
    insertAthead(head, 14);
    insertAthead(head, 15);
    print(head);

    insertAttail(tail, 50);
    insertAttail(tail, 60);
    insertAttail(tail, 70);
    print(head);

    insertAtposition(tail, head, 3, 1000);
    print(head);
    return 0;
}