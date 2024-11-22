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
    Person ram;
    ram.Mname = "Kaushalya";
    ram.Fname = "Dasharath";
    ram.age = 3;
    ram.addharno = 1234567890;

    cout << "Mother of Ram: " << ram.Mname << endl;
    cout << "Father of Ram: " << ram.Fname << endl;
    cout << "Age of Ram: " << ram.age << endl;
    cout << "Addhar No of Ram: " << ram.addharno << endl;

    return 0;
}