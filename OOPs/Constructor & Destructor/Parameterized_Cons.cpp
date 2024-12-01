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
        cout<<"Constructor -1!"<<endl;
        name = "Aditya";
        acc_no = 1234;
        balance = 1000;
    }

    //  Parameterized Constructor
    // Customer(string a, int b, int c){
    //     cout<<"Constructur -2"<<endl;
    //     name = a;
    //     acc_no = b;
    //     balance = c;
    // }

    Customer(string a, int b){
         cout<<"Constructor - 3!"<<endl;
        name = a;
        acc_no = b;
    }

    Customer(string name, int acc_no, int balance){
        cout<<"Constructor - 4!"<<endl;
        this->name = name;
        (*this).acc_no = acc_no;
        this->balance = balance;
    }

    // Constructor Overloding -> Class Having Multiple Constructors with Same Name BUT Different Parameters!

    void display()
    {
        
        cout << "Name: " << name << endl;
        cout << "Account Number: " << acc_no << endl;
        cout << "Balance: " << balance << endl;
        cout << "--------------------------" << endl;
    }
};

int main()
{
    // Customer c1;
    // c1.display();

    // Customer c2("Raghav", 123587, 100000);
    // c2.display();

    // Customer c3("krishna", 312);
    // c3.display();

    Customer c4("Shiva", 123, 200000);
    c4.display();



    return 0;
}