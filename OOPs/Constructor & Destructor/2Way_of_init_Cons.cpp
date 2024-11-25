#include <iostream>
using namespace std;

class Customer
{

    string name;
    int acc_no;
    int balance;

public:

    //Inline Constructor
    Customer(string n, int a, int b): name(n), acc_no(a), balance(b){}

    // Declaring the constructor
    // Definiton will be provided outside
    Customer();

    void display()
    {
        cout << "--------------------------" << endl;
        cout << "Name: " << name << endl;
        cout << "Account Number: " << acc_no << endl;
        cout << "Balance: " << balance << endl;
    }

};


Customer::Customer(){
    cout<<"--------Constructor Outside--------"<<endl;
    name = "Aditya";
}


int main()
{
    Customer c1("Sita", 123, 1000);
    c1.display();

    Customer c2;
    c2.display();
    
    return 0;
}