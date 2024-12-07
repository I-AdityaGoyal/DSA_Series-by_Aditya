#include <iostream>
using namespace std;

class Class1
{
public:
    int data = 10; // Public member
};

class Class2 : protected Class1
{
public:
    void display()
    {
        cout << "Accessing public member from Class1 as protected: " << data << endl;
    }


    void updateData(int value)
    {
        data = value; // Accessible as protected
    }
};

int main()
{
    Class2 obj;
    
    
    obj.display();
    obj.updateData(40);
    obj.display(); // Accessible only through Class2 methods

    return 0;
}
