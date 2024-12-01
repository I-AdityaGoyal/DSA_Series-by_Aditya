// hybrid_inheritance.cpp
#include <iostream>
using namespace std;

class Female
{
public:
    void gender()
    {
        cout << "Gender: Female" << endl;
    }
};

class Male
{
public:
    void gender()
    {
        cout << "Gender: Male" << endl;
    }
};

class Student
{
public:
    void study()
    {
        cout << "I'm studying." << endl;
    }
};

class Girl : public Female, public Student
{
public:
    void name()
    {
        cout << "Name: Girl" << endl;
    }
};

class Boy : public Male, public Student
{
public:
    void name()
    {
        cout << "Name: Boy" << endl;
    }
};

int main()
{
    Girl g;
    Boy b;

    g.gender(); // Inherited from Female
    g.study();  // Inherited from Student
    g.name();   // Specific to Girl class

    cout << endl;

    b.gender(); // Inherited from Male
    b.study();  // Inherited from Student
    b.name();   // Specific to Boy class

    return 0;
}
