#include <iostream>
using namespace std;

class dsa
{

private:
    int a;

    void fun3()
    {
        cout << "Inside fun3()" << endl;
    }

protected:
    int b;

    void fun2()
    {
        cout << "Inside fun2()" << endl;
    }

public:
    int c;

    void fun()
    {
        cout << "Inside fun()" << endl;
    }
};


int main()
{
    dsa obj;

    return 0;
}