#include <iostream>
using namespace std;

class Customer
{
    
private:
    int acc_no;
    int *balance;

public:
    // Constructor
    Customer(int acc = 0, int bal = 0)
    {
        acc_no = acc;
        balance = new int(bal);
    }

    // Deep Copy Constructor
    Customer(const Customer &c)
    {
        acc_no = c.acc_no;
        balance = new int(*c.balance); // Allocates new memory and copies the value
        cout << "Deep Copy Constructor Called!" << endl;
    }

    // Destructor
    ~Customer()
    {
        delete balance; // Release allocated memory
        cout << "Destructor Called for Account Number: " << acc_no << endl;
    }

    // Function to modify balance directly
    void updateBalance(int newBalance)
    {
        *balance = newBalance;
    }

    // Function to display account details
    void printDetails() const
    {
        cout << "Account Number: " << acc_no << ", Balance: " << *balance << endl;
    }
};

int main()
{
    // Original Customer
    Customer *c1 = new Customer(100, 5220);
    cout << "Original Customer (c1): ";
    c1->printDetails(); // Use -> to call member functions of a pointer

    // Deep Copy
    Customer c2 = *c1; // Create a deep copy using dereferenced pointer
    cout << "Deep Copy (c2): ";
    c2.printDetails();

    // Modify original balance to see deep copy independence
    c1->updateBalance(6000);
    cout << "\nAfter Updating c1 Balance to 6000:" << endl;
    cout << "Original Customer (c1): ";
    c1->printDetails();
    cout << "Deep Copy (c2): ";
    c2.printDetails();

    // Delete Original Customer
    cout << "\nAfter Deleting Original Customer (c1):" << endl;
    delete c1; // Deletes memory allocated for c1

    // Accessing c2 after c1 deletion - safe due to deep copy
    cout << "Deep Copy (c2): ";
    c2.printDetails(); // Safe, c2 has its own memory

    return 0;
}
