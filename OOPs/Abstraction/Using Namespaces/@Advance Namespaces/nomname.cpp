#include <iostream>
#include "noname.h"

using namespace std;

int main()
{
    cout << internalValue() << endl; // Accessing the function from the unnamed namespace

    temp t1;
    cout << t1.print() << endl;
    return 0;
}
