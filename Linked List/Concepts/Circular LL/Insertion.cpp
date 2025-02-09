#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Print Circular Linked List
void print(Node* head) {
    if (head == NULL) {
        cout << "Empty List!" << endl;
        return;
    }
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

// Insert after a given element 
void insertAtPosition(Node* &head, int element, int data) {
    
    // If list is empty
    if (head == NULL) {
        head = new Node(data);
        head->next = head;
        return;
    }

    // Inserting after the given element
    Node* temp = head;
    while(temp->data != element) {
        temp = temp->next;
    }                     
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}


int main() {
    Node* head = NULL;

    insertAtPosition(head, 1, 10);
    insertAtPosition(head, 10, 20);
    insertAtPosition(head, 20, 30);
    insertAtPosition(head, 10, 15);
    insertAtPosition(head, 20, 25);

    // CLL: 10 -> 15 -> 20 -> 25 -> 30
    print(head);

    cout<<"Value after 25: "<<head->next->next->next->next->data<<endl;
    cout<<"Value after 30: "<<head->next->next->next->next->next->data<<endl;


    return 0;
}
