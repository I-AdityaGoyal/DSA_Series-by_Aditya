#include <iostream>
using namespace std;

class dsa
{

private:
    int a;

    void fun3()
    {
        cout << "Inside fun3()" << endl;
        a = 10;
    }

protected:
    int b;

    void fun2()
    {
        cout << "Inside fun2()" << endl;
        b = 20;
        a = 5;
    }

public:
    int c;

    void fun()
    {
        cout << "Inside fun()" << endl;
        c = 15;
        b = 10;
    }

    dsa()
    {
        fun();
        fun2();
        fun3();

        cout << "Printing Values: " << a << " " << b << " " << c << endl;
    }
};

int main()
{
    dsa obj;

    return 0;
}