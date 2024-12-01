#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base class constructor called\n";
    }

    ~Base() {
        cout << "Base class destructor called\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor called\n";
    }

    ~Derived() {
        cout << "Derived class destructor called\n";
    }
};

int main() {
    cout << "\nCreating object of Derived class\n";
    Derived d;  // Object of Derived class created

    cout << "\nEnd of main function\n";
    // When the object goes out of scope, destructors are called automatically
    return 0;
}
