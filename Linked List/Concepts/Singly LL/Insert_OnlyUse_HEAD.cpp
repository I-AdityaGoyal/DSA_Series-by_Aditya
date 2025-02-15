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

// Insert a node at any Position
void insertAtPosition(Node *&head, int data, int pos)
{
    // Create new node
    Node *newNode = new Node(data);

    // If inserting at head (position 1)
    if (pos == 1)
    {
        newNode->next = head;
        head = newNode;
        cout << "Inserted " << data << " at position " << pos << " (Head)" << endl;
        return;
    }

    Node *temp = head;
   for (int i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    // Insert at the position (middle or end)
    newNode->next = temp->next;
    temp->next = newNode;

    cout << "Inserted " << data << " at position " << pos << endl;
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

    // Print updated linked list
    print(head);

    return 0;
}
