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
        this->next = NULL;
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

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = head; // Now, it is a Circular LL
   
    print(head);

    cout<<"Circular LL: ";
    cout<<head->data<<" -> ";
    cout<<head->next->data<<" -> ";
    cout<<head->next->next->data<<" -> ";
    cout<<head->next->next->next->data<<" -> ";

    return 0;
}