#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    cout << n << endl;

    // & -> Address of Operator
    cout << "Address of n is: " << &n << endl;

    // To store Address we use Pointers
    int *ptr = &n;

    cout << "Address is: " << ptr << endl;
    cout << "Value at Address is: " << *ptr << endl;

    // ptr is a pointer to INT, Data Type of pointer will be same as tha Data Type of variable!

    cout << " size of integer is " << sizeof(n) << endl;
    cout << " size of pointer is " << sizeof(ptr) << endl;

    return 0;
}