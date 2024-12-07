#include <iostream>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Dog Bark." << endl;
    }
};

int main()
{
    // Animal a;
    // a.speak();

    // Dog d;
    // d.speak();

    // Parent Class pointer can store child class address!
    Animal *p;
    p = new Dog();

    p->speak(); // Calling For Base Class Function

    delete p;
    return 0;
}