#include <iostream>
using namespace std;

class Class1
{
private:
    int data = 10; // Private member

public:
    int getData() const { return data; }
    void setData(int value) { data = value; }
};

class Class2 : protected Class1
{
    // Both getData() & setData() inherited as protected here can't use directlty!
    
public:
    void display()
    {
        cout << "Accessing private member through Class1 as protected: " << getData() << endl;
    }

    void updateData(int value)
    {
        setData(value);
    }
};

int main()
{
    Class2 obj;


    obj.display();
    obj.updateData(70);
    obj.display();

    return 0;
}
