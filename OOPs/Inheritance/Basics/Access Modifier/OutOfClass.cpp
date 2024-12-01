#include <iostream>
using namespace std;

class dsa
{

private:
    int a;

protected:
    int b;

public:
    int c;
    
};


int main()
{
    dsa obj;

    cout << "Access public Outside class: " << obj.c << endl;

    // cout<< "Access protected Outside class: "<< obj.b << endl;

    // cout<< "Access private Outside class: "<< obj.a << endl;

    return 0;
}