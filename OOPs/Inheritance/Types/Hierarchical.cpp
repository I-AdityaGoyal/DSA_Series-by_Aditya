#include <iostream>
using namespace std;

class Animal
{
public:
    void sound()
    {
        cout << "\nAnimal makes sound." << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Cat meows." << endl;
    }
};

int main()
{
    Dog d;
    Cat c;

    d.sound(); // Inherited from Animal class
    d.bark();  // Specific to Dog class

    c.sound(); // Inherited from Animal class
    c.meow();  // Specific to Cat class

    return 0;
}
