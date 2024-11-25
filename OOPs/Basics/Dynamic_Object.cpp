#include <iostream>
using namespace std;

class Person
{
public:
    string Mname;
    string Fname;
    int age;
    int addharno;
};

int main()
{
    Person *ram = new Person;

    (*ram).Fname = "Dasharath";
    ram->age = 3;

    cout << "Father: " << ram->Fname << endl;
    cout << "Age: " << (*ram).age << endl;

    delete ram;

    return 0;
}