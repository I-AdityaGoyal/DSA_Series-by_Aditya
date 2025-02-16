#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }

    // Destructor
    ~Node()
    {
        // This will delete the node for which the destructor is called!
        // cout << "Deleting Node with data " << this->data << endl;

        // Once Deleted can't access rest of the Node. So, it's better to free memory for them as well!
        cout << "Deleting Node with data " << data << endl;
        if (next)
        {
            delete next;
            next = NULL;
        }
    }
};

void print(Node *head)
{
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }
    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

void deleteNode(Node *&head, int value)
{

    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }

    Node *curr = head->next;
    Node *prev = head;

    // Finding the node to delete
    while (curr->data != value)
    {
        prev = curr;
        curr = curr->next;
    }

    // Circular Linkage
    prev->next = curr->next;

    // If only one node is present
    if (curr == prev)
        head = NULL;

    // If the node to delete is head
    else if (curr == head)
        head = curr->next; // head = prev; 

    curr->next = NULL;
    delete curr;
}

int main()
{
    // Linked List: 1 -> 2 -> 3 -> 4 -> 5
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = head;

    // Print the linked list
    print(head);

    // Delete nodes at different positions
    deleteNode(head, 1);
    print(head);

    deleteNode(head, 3);
    print(head);

    // Infinite loop if we don't break the circular reference
    // delete head;

    // Break the circular reference and delete the linked list
    if (head)
    {
        Node *temp = head;
        while (temp->next != head)
            temp = temp->next;
        temp->next = NULL; // Break circular reference
        delete head;
    }

    return 0;
}