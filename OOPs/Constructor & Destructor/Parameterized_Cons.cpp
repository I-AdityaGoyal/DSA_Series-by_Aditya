#include <iostream>
using namespace std;

class Customer
{

    string name;
    int acc_no;
    int balance;

public:

    // Simple Costructor
    Customer()
    {
        name = "Aditya";
        acc_no = 1234;
        balance = 1000;
    }

    //  Parameterized Constructor
    Customer(string a, int b, int c){
        name = a;
        acc_no = b;
        balance = c;
    }

    Customer(string a, int b){
        name = a;
        acc_no = b;
    }

    // Customer(string name, int acc_no, int balance){
    //     this->name = name;
    //     this->acc_no = acc_no;
    //     this->balance = balance;
    // }

    // Constructor Overloding -> Class Having Multiple Constructors with Same Name BUT Different Parameters!

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
    Customer c1;
    c1.display();

    Customer c2("Raghav", 123587, 100000);
    c2.display();

    Customer c3("krishna", 312);
    c3.display();

    return 0;
}