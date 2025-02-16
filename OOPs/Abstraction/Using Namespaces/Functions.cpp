#include <iostream>
using namespace std;

namespace ns1
{
    int value() { return 5; }
}


namespace ns2
{
    const double x = 100;
    double value() { return 2 * x; }
}

int main()
{
    cout << ns1::value() << '\n';

    cout << ns2::value() << '\n';

    cout << ns2::x << '\n';

    return 0;
}