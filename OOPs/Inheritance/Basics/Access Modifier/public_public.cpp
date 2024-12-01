#include <iostream>
using namespace std;

class Class1
{

public:
    int data = 10; // Public member
};


class Class2 : public Class1
{
public:
    void display()
    {
        cout << "Accessing public member from Class1: " << data << endl;
    }
};


int main()
{
    Class2 obj;
    obj.display();
    obj.data = 20; // Accessible directly due to public inheritance
    cout << "Updated data: " << obj.data << endl;

    return 0;
}
