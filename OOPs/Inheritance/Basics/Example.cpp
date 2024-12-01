#include <iostream>
#include <string>

using namespace std;

class School
{
private:
    string schoolName; // Accessible only within the School class

protected:
    string schoolAddress; // Accessible in derived classes

public:
    // Constructor with const references for safety

    School(const string &name, const string &address)
    {
        schoolName = name;
        schoolAddress = address;
    }

    void displaySchool()
    {
        cout << "School: " << schoolName << ", Address: " << schoolAddress << endl;
    }
};

class Teacher : public School
{
protected:
    string teacherName; // Accessible in derived classes

public:
    Teacher(const string &name, const string &address, const string &tName) : School(name, address)
    {
        teacherName = tName;
    }

    void displayTeacher()
    {
        cout << "Teacher: " << teacherName << " works at " << schoolAddress << endl;
    }
};

class Student : public School
{
private:
    string studentName; // Only accessible within Student class

public:
    Student(const string &name, const string &address, const string &sName)
        : School(name, address), studentName(sName) {}

    void displayStudent()
    {
        cout << "Student: " << studentName << " studies at " << schoolAddress << endl;
    }
};

int main()
{
    // Create Teacher and Student objects
    Teacher teacher("ABC School", "148/5, A Shiv Nagar", "Mrs. Radhika");
    Student student("ABC School", "148/5, A Shiv Nagar", "Krishna");

    // Display details

    cout << endl;
    teacher.displaySchool(); // From School base class
    cout << endl;
    teacher.displayTeacher(); // From Teacher class
    cout << endl;
    student.displayStudent(); // From Student class
    cout << endl;

    return 0;
}
