#include <iostream>
using namespace std;
int main()
{
    int a, b, c; // Static Allocation - STACK!

    int *n = new int; // Dynamic Allocation - HEAP!

    cin >> *n;
    cout << "value: " << *n;




    // Case-1: Automatically Memory Free
    while (true)
    {
        int a = 10;
    }


    // Case-2: Manually Memory Free
    while (true)
    {
        int *ptr = new int;
        // delete ptr;
    }

    return 0;
}