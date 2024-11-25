#include <iostream>
using namespace std;

class Customer
{

    string name;
    int acc_no;
    int balance;

public:
    // Default Constructor - Automatically destroy when we create our constructor
    // Customer(){
    // }

    Customer()
    {
        name = "Aditya";
        acc_no = 1234;
        balance = 1000;
    }

    void display()
    {
        cout << "--------------------------" << endl;
        cout << "Name: " << name << endl;
        cout << "Account Number: " << acc_no << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    Customer c1, c2;
    c1.display();
    c2.display();

    return 0;
}