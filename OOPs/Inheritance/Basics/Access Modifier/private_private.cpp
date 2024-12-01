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

class Class2 : private Class1
{
public:
    void display()
    {
        cout << "Accessing private member through Class1 privately: " << getData() << endl;
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
    obj.updateData(60);
    obj.display();

    return 0;
}
