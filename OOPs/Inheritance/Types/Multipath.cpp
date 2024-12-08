#include <iostream>
using namespace std;

class Person
{
public:
    string name;
};

class Student : public virtual Person
{
public:
    int age;
};

class Youtuber : public  virtual Person
{
public:
    int subs;
};

class Aditya : public Student, public Youtuber
{
public:
    Aditya(string name, int age, int subs)
    {
        this->name = name;
        this->age = age;
        this->subs = subs;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subscribers: " << subs << endl;
    }
};

int main()
{
    Aditya Adi("Aditya", 21, 183);

    Adi.display();

    return 0;
}