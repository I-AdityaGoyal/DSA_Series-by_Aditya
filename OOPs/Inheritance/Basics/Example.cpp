#include <iostream>
#include <string>
using namespace std;

// Base class: Person
class Person
{
protected:
    string name;
    int age;

public:
    Person(const string &name, int age) : name(name), age(age) {}

    void introduce()
    {
        cout << "Hi, I am " << name << ", and I am " << age << " years old." << endl;
    }
};

// Derived class: Teacher
class Teacher : public Person
{
private:
    string subject; // Private: Can only be accessed within the Teacher class

public:
    Teacher(const string &name, int age, const string &subject)
        : Person(name, age), subject(subject) {}

    void teach()
    {
        cout << "I teach " << subject << "." << endl;
    }
};

// Derived class: Student
class Student : public Person
{
private:
    int grade; // Private: Only accessible within the Student class

public:
    Student(const string &name, int age, int grade)
        : Person(name, age), grade(grade) {}

    void study()
    {
        cout << "I am in grade " << grade << " and I love studying!" << endl;
    }
};

int main()
{
    // Creating a Teacher object
    Teacher teacher("Mr. SHIVA", 40, "Mathematics");
    teacher.introduce(); // Inherited from Person
    teacher.teach();     // Specific to Teacher

    cout << endl;

    // Creating a Student object
    Student student("RAM", 15, 10);
    student.introduce(); // Inherited from Person
    student.study();     // Specific to Student

    return 0;
}
