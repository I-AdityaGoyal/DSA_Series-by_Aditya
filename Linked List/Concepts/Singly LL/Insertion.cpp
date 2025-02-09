#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// Print the linked list
void print(Node *head)
{
    if (head == NULL)
    {
        cout << "Empty List!" << endl;
        return;
    }

    Node *temp = head;
    int size = 0;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        size++;
        temp = temp->next;
    }
    cout << endl
         << "Size: " << size << endl;
}

// Insert a node at the head
void insertAtHead(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;

    // If list was empty, update tail as well
    if (tail == NULL)
        tail = head;

    cout << "Inserted " << d << " at head. Head: " << head->data
         << ", Tail: " << tail->data << endl;
}

// Insert a node at the tail
void insertAtTail(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);

    // If list is empty, head and tail both should point to new node
    if (tail == NULL)
    {
        head = tail = temp;
    }
    else
    {
        tail->next = temp; 
        tail = temp;       
    }

    cout << "Inserted " << d << " at tail. Head: " << head->data
         << ", Tail: " << tail->data << endl;
}

// Insert a node at position 
void insertAtPosition(Node *&head, Node *&tail, int data, int pos)
{
    // If inserting at head (position 1)
    if (pos == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }

    Node *temp = head;
    int count = 1;

    // Traverse to the (pos-1)th node or the last node
    while (count < pos - 1 && temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }

    // If inserting at tail
    if (temp->next == NULL)
    {
        insertAtTail(head, tail, data);
        return;
    }

    // Insert in the middle of the linked list
    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;

    cout << "Inserted " << data << " at position " << pos << endl;
}

int main()
{
    // Create head and tail pointers
    Node *head = NULL;
    Node *tail = NULL;

    // Print initially empty linked list
    print(head);

    // Insert elements at head and tail
    insertAtHead(head, tail, 1);
    insertAtTail(head, tail, 2);
    insertAtTail(head, tail, 3);
    insertAtHead(head, tail, 0);
    insertAtPosition(head, tail, 4, 3);

    // Print updated linked list
    print(head);

    return 0;
}
