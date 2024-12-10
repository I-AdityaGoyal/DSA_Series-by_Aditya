#include <iostream>
using namespace std;

class Customer
{
    string name;
    int balance;

public:
    Customer(string name, int balance)
    {
        this->name = name;
        this->balance = balance;
    }

    // Depositing Money
    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited Rs. " << amount << endl;
        }

        else
        {
            throw "Invalid Amout!\n";
        }
    }

    // Withdraw Money
    void withdraw(int amount)
    {
        if (amount > 0 && balance >= amount)
        {
            balance -= amount;
            cout << "Withdrawn Rs. " << amount << endl;
        }
        else if (amount < 0)
        {
            throw "Invalid Amount!\n";
        }
        else
        {
            throw "Insufficient Balance!\n";
        }
    }
};

int main()
{
    Customer C1("Ram", 10000);

    try
    {
        // Error can occur into these lines!
        C1.deposit(300);
        C1.withdraw(78333);
        C1.deposit(550);
    }
    // Catch is required after Try Block!
    catch (const char *e)
    {
        cout << "Exception Occured: " << e << endl;
    }

    cout<<"I'm On!"<<endl;

    /*
    ->  Const: Using Constant So, No one can change the throwed message
    ->  char* e: stores the address of the string literal that was thrown in the throw statement.
    */

    return 0;
}