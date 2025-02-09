#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

// Traverse the list
void print(Node *&head)
{
    
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    
}

// Insert at the beginning
void insertAtBeginning(Node *&head, int data)
{
    if (head == NULL)
    {
        head = new Node(data);
        return;
    }

    Node *newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

// Insert at the any position {Middle or End}
void insertAtPosition(Node *&head, int data, int position)
{
    // If the position is 0 or 1, then insert at the beginning
    if (position == 0 || position == 1)
    {
        insertAtBeginning(head, data);
        cout << "Inserted " << data << " at position " << position << endl;
        return;
    }

    Node *tempHead = head;
    for (int i = 1; i < position-1; i++)
        tempHead = tempHead->next;

    // Inserting at Last!
    if (tempHead->next == NULL)
    {
        Node *temp = new Node(data);
        tempHead->next = temp;
        temp->prev = tempHead;
        cout << "Inserted " << data << " at position " << position << endl;
        return;
    }

    // Inserting at middle of LL
    Node* newNode = new Node(data);

    newNode->next = tempHead->next;
    tempHead->next->prev = newNode;
    tempHead->next = newNode;
    newNode->prev = tempHead;

    cout << "Inserted " << data << " at position " << position << endl;

}

int main()
{
    // Create head pointer
    Node *head = NULL;

    // Insert elements at different positions
    insertAtPosition(head, 1, 1);
    insertAtPosition(head, 2, 2);
    insertAtPosition(head, 3, 3);
    insertAtPosition(head, 0, 1); // Insert at head
    insertAtPosition(head, 4, 3); // Insert at middle
    insertAtPosition(head, 5, 6); // Insert at end

    // Print updated linked list: 0 -> 1 -> 4 -> 2 -> 3 -> 5 
    print(head);

    return 0;
}