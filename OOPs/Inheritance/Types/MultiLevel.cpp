// multilevel_inheritance.cpp
#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal makes sound." << endl;
    }
};

class Mammal : public Animal {
public:
    void giveBirth() {
        cout << "Mammal gives birth." << endl;
    }
};

class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Dog d;
    d.sound();      // Inherited from Animal class
    d.giveBirth();  // Inherited from Mammal class
    d.bark();       // Specific to Dog class
    return 0;
}
