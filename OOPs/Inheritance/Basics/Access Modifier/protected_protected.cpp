#include <iostream>
using namespace std;

class Class1
{
protected:
    int data = 10; // Protected member
};

class Class2 : protected Class1
{
public:
    void display()
    {
        cout << "Accessing protected member from Class1 as protected: " << data << endl;
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
    obj.updateData(100);
    obj.display();

    return 0;
}
