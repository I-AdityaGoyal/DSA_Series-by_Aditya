#include <iostream>
using namespace std;

class Animal
{
public:
    void sound()
    {
        cout << "Animal makes sound." << endl;
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

int main()
{
    Dog d;
    d.sound(); // Inherited from Animal class
    d.bark();  // Specific to Dog class
    return 0;
}
