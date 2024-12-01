#include <iostream>
using namespace std;

class Class1
{
private:
    int data = 10; // Private member

public:
    int getData() { return data; }
    void setData(int value) { data = value; }
};


class Class2 : public Class1
{};

int main()
{
    Class2 obj;
    obj.setData(50);
    cout << "Accessing private member through Class1 methods: " << obj.getData() << endl;

    return 0;
}
