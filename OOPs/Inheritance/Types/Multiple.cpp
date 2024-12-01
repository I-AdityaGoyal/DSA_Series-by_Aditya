#include <iostream>
using namespace std;

class Animal {
public:
    
    void sound() {
        cout << "Animal makes sound." << endl;
    }
};

class Bird {
public:
    void fly() {
        cout << "Bird can fly." << endl;
    }
};

class Bat : public Animal, public Bird {
public:
    void hang() {
        cout << "Bat hangs upside down." << endl;
    }
};

int main() {
    Bat b;
    b.sound(); // Inherited from Animal class
    b.fly();   // Inherited from Bird class
    b.hang();  // Specific to Bat class
    return 0;
}
