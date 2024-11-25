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

    // Shallow Copy Constructor
    Customer(const Customer &c)
    {
        acc_no = c.acc_no;
        balance = c.balance; // Shallow copy: copies the pointer
        cout << "Shallow Copy Constructor Called!" << endl;
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
    c1->printDetails(); 

    
    // Shallow Copy
    Customer c2 = *c1; // Create a shallow copy using dereferenced pointer
    cout << "Shallow Copy (c2): ";
    c2.printDetails();

    // Modify original balance to see shallow copy impact
    c1->updateBalance(6000);
    cout << "\nAfter Updating c1 Balance to 6000:" << endl;
    cout << "Original Customer (c1): ";
    c1->printDetails();
    cout << "Shallow Copy (c2): ";
    c2.printDetails();

    // Delete Original Customer
    cout << "\nAfter Deleting Original Customer (c1):" << endl;
    delete c1; // Deletes memory allocated for c1

    // Accessing c2 after c1 deletion - demonstrates dangling pointer issue
    cout << "Shallow Copy (c2): ";
    c2.printDetails(); // Unsafe, c2 points to deleted memory

    return 0;
}
