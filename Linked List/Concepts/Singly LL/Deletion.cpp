#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int val)
    {
        data = val;
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

void deleteNode(Node *&head, int pos)
{
    if (!head) // If list is empty
    {
        cout << "List is empty, nothing to delete!" << endl;
        return;
    }

    // Delete head node
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    Node *curr = head;
    Node *prev = NULL;

    int cnt = 1;
    while (cnt < pos)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

void print(Node *head)
{
    if (!head)
    {
        cout << "List is empty!" << endl;
        return;
    }

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
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
