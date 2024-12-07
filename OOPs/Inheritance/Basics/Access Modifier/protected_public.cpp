#include <iostream>
using namespace std;

class Class1
{
protected:
    int data = 10; // Protected member
};

class Class2 : public Class1
{
public:
    void display()
    {
        cout << "Accessing protected member from Class1: " << data << endl;
    }

    void updateData(int value)
    {
        data = value; // Accessible as protected
    }
};

int main()
{
    Class2 obj;

    // obj.data = 34; // will be treated as protected

    obj.display();
    obj.updateData(80);
    obj.display();

    return 0;
}
