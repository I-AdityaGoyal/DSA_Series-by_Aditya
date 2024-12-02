#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    int accountNumber;
    double balance;

public:
    // Constructor
    Account(int accNo, double initialBalance)
    {
        accountNumber = accNo;
        balance = initialBalance;
    }

    int getAccountNumber() 
    {
        return accountNumber;
    }

    double getBalance() 
    {
        return balance;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    void displayDetails() 
    {
        cout << "Account Number: " << accountNumber << ", Balance: " << balance << endl;
    }
};

int main()
{

    Account acc1(101, 5000.0);

    acc1.displayDetails();

    acc1.deposit(1500.0);
    acc1.withdraw(2000.0);

    acc1.displayDetails();

    
    acc1.withdraw(6000.0);
    acc1.deposit(-500.0);

    return 0;
}
