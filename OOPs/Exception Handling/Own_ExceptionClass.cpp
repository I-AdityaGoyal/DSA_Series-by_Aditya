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

class InValidAmountError : public runtime_error
{
public:
    InValidAmountError(const string &message) : runtime_error(message) {}
};

class InsufficientBalanceError : public runtime_error
{
public:
    InsufficientBalanceError(const string &message) : runtime_error(message) {}
};

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
            throw InValidAmountError("Invalid Amout!");

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
        else if (amount <= 0)
        {
            throw InValidAmountError("Invalid Amount!");
        }
        else
        {
            throw InsufficientBalanceError("Insufficient Balance!");
        }
    }
};

int main()
{
    Customer C1("Ram", 10000);

    try
    {
        C1.deposit(300);
        C1.withdraw(11546845);
    }
    catch (const InValidAmountError &e)
    {
        cout << "Exception Occured: " << e.what() << endl;
    }
    catch (const InsufficientBalanceError &e)
    {
        cout << "Exception Occured: " << e.what() << endl;
    }
    // Default Catch Block! - if no one executed
    catch (...)
    {
        cout << "An unknown error occurred!" << endl;
    }

    return 0;
}