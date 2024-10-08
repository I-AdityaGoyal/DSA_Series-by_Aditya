#include <iostream>
using namespace std;

int GCD_HCF(int a, int b)
{

    if (a == 0)
        return b;

    if (b == 0)
        return a;

    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    return a;
}

int main()
{
    int a = 72;
    int b = 24;

    // GCD(a,b) = GCD(a-b, b);
    // GCD(a,b) = GCD(a%b, b);
    int gcd = GCD_HCF(a, b);

    cout << "GCD/HCf of " << a << " & " << b << " is: " << gcd << endl;

    // LCM(a,b) * GCD(a,b) = a*b;
    int lcm = (a * b) / gcd;

    cout << "LCM of " << a << " & " << b << " is: " << lcm << endl;

    return 0;
}