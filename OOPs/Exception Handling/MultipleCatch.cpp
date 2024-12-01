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
        if (amount <= 0)
            throw runtime_error("Invalid Amout!");

        balance += amount;
        cout << "Deposited Rs. " << amount << endl;
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
            throw runtime_error("Invalid Amount!");
        }
        else
        {
            throw runtime_error("Insufficient Balance!");
        }
    }
};

int main()
{
    Customer C1("Ram", 10000);

    try
    {
        C1.deposit(300);
        C1.withdraw(78333);
    }
    catch (const runtime_error &e)
    {
        cout << "Exception Occured: " << e.what() << endl;
    }
    catch (const bad_alloc &e)
    {
        cout << "Memory Allocation Failed: " << e.what() << endl;
    }
    // Default Catch Block! - if no one executed
    catch (...)
    {
        cout << "An unknown error occurred!" << endl;
    }

    return 0;
}