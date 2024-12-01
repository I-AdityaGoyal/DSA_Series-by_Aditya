#include <iostream>
using namespace std;
class Customer
{
private:
    int acc_no;
    int balance;
    static int total_users;

public:
    Customer(int acc_no, int balance)
    {
        this->acc_no = acc_no;
        this->balance = balance;
        total_users++;
    }

    void print()
    {
        cout << "Account Number: " << acc_no << endl;
        cout << "Balance: " << balance << endl;
    }

    static void display()
    {
        cout << "Total Users: " << total_users << endl;
    }
};

int Customer ::total_users = 0;

int main()
{
    cout << "Customer C1" << endl;
    Customer c1(1234, 1000);

    c1.print();
    c1.display();

    cout << "Customer C2" << endl;
    Customer c2(1784, 2000);

    c2.print();
    Customer::display();

    return 0;
}