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
            cout << "Invalid Amout!" << endl;
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
            cout << "Invalid Amount!" << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }
};

int main()
{
    Customer C1("Ram", 10000);

    C1.deposit(300);
    C1.withdraw(78333);

    return 0;
}