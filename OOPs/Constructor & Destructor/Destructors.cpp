#include <iostream>
using namespace std;

class Customer
{
    string name;
    int *balance;

public:
    Customer()
    {
        name = "C4";
        cout << "Constructor is called for: " << name << endl;
    }

    Customer(string name, int balance = 0)
    {
        this->name = name;
        this->balance = new int;
        *(this->balance) = balance;

        cout << "Constructor is called for: " << name << endl;
    }

    // Deafult Destructor-> Automatically get destroyed when we create our OWN!
    ~Customer()
    {
        delete balance;
        cout << "Destructor is called for: " << name << endl;
    }
};

int main()
{
    Customer c1("C1"),c2("C2"),c3("C3");

    Customer*c4 = new Customer;
    delete c4;


    return 0;
}