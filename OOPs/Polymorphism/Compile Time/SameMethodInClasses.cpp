#include <iostream>
using namespace std;

class Base
{
public:
     void print()
    {
        cout << "Base class print function\n";
    }
};

class Derived : public Base
{
public:
    void print()
    {
        cout << "Derived class print function\n";
    }
};

int main()
{
    Derived d;

    d.print(); // Calls Derived class print

    // d.Base::print();          // Calls Base class print
    
    return 0;
}
