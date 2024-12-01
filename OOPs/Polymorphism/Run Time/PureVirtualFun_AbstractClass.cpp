#include <iostream>
#include <vector>
using namespace std;

/*
Abstract Class in C++:
To make a class abstract in C++, we declare at least one pure virtual function.
This is done by assigning = 0 to the function declaration,
which tells the compiler that this function has no implementation in the current class
and must be overridden by any derived class.

-> You cannot create an object of the abstract class
*/

class Animal
{

public:
    virtual void speak() = 0;
};

class Dog : public Animal
{
public:
    void speak() override
    {
        cout << "Dog Bark." << endl;
    }
};

class Cat : public Animal
{
public:
    void speak() override
    {
        cout << "Cat Meow." << endl;
    }
};

class Lion : public Animal
{
public:
    void speak() override
    {
        cout << "Lion Roar." << endl;
    }
};

int main()
{
    // This allows different animals to have their own behavior while ensuring they all share the same interface.

    vector<Animal *> vec;

    vec.push_back(new Dog());
    vec.push_back(new Cat());
    vec.push_back(new Lion());
    vec.push_back(new Cat());
    vec.push_back(new Dog());
    vec.push_back(new Lion());

    Animal *a;
    for (int i = 0; i < vec.size(); i++)
    {

        a = vec[i];
        a->speak();
    }

    return 0;
}