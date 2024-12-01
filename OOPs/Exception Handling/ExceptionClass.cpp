#include <iostream>
using namespace std;


/*
---------------------------------- Not Exactaly -> But Inside Exception Class -------------------------------
class exception
{
protected:
    string message;

public:

    exception(const char *message)
    {
        this->message = message;
    }

    string what(){
        return message;
    }
};

class runtime_error : public exception{
    public:
    runtime_error(const char *message) : exception(message){}

    // what() is inherited from exception OR what() can be overloaded in this class!
};

*/

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


    return 0;
}