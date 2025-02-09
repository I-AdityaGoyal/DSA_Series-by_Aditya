#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};


int main()
{
    //Static Allocation
    Node n1(1);
    cout << n1.data << endl;

    //Dynamic Allocation
    Node *n2 = new Node(2);
    cout << n2->data << endl;

    return 0;
}