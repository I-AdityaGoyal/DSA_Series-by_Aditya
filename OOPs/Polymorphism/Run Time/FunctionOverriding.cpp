#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "Animal speaks!" << endl;
    }
};

class Dog : public Animal
{
public:

    /* The override keyword explicitly tells the compilerthat this function
    is intended to override a virtual function in the base class. */
    void speak() override
    { 
        cout << "Dog barks!" << endl;
    }

};

int main()
{
    Animal *a = new Dog();
    a->speak();

    delete a;
    return 0;
}