#include <iostream>
using namespace std;

// first name space
namespace first
{
    int val1 = 500;
    // val1 = 9;Can Not be update
}

// rest part of the first namespace
namespace first
{
    int val2 = 501;
    // val1 = 9;   Can Not be update

}

int main()
{
    cout << first::val1 << "\n";
    cout << first::val2 << "\n";
    return 0;
}
