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

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);

    head->next = temp1;
    temp1->prev = head;


    cout << head->data << endl;
    cout << temp1->data << endl;
    cout << head->next->data << endl;
    cout << temp1->prev->data << endl;

    return 0;
}