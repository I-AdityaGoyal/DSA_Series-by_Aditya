#include <iostream>
using namespace std;

class ATM
{
private:
    int pin;
    double balance;

public:
    ATM(int userPin, double initialBalance) : pin(userPin), balance(initialBalance) {}

    bool authenticate(int inputPin)
    {
        return inputPin == pin;
    }

    void checkBalance()
    {
        cout << "Current Balance: " << balance << endl;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal successful. Remaining Balance: " << balance << endl;
        }
        else
        {
            cout << "Insufficient funds." << endl;
        }
    }
};

int main()
{
    ATM myATM(1234, 5000);
    int enteredPin;

    cout << "Enter your PIN: ";
    cin >> enteredPin;

    if (myATM.authenticate(enteredPin))
    {
        myATM.checkBalance();
        myATM.withdraw(1500);
        myATM.checkBalance();
    }
    else
    {
        cout << "Authentication failed." << endl;
    }

    return 0;
}
