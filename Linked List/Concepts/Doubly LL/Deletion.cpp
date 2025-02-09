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

void deleteNode(Node *&head, int position)
{
    // This is for the 1st Node
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    // For Middle or End Node
    Node *nodeToDelete = head;
    Node *prevNode = NULL;

    for (int i = 1; i < position - 1; i++)
    {
        prevNode = nodeToDelete;
        nodeToDelete = nodeToDelete->next;
    }

    nodeToDelete->prev = NULL;
    prevNode->next = nodeToDelete->next;
    nodeToDelete->next = NULL;

    delete nodeToDelete;

}

int main()
{
    // Linked List: 1 -> 2 -> 3 -> 4 -> 5
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Print the linked list
    print(head);

    // Delete nodes at different positions
    deleteNode(head, 1);
    print(head);

    deleteNode(head, 3);
    print(head);

    // The destructor will take care of deleting all nodes when the program ends
    delete head;
    return 0;
}