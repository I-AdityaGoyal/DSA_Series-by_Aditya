#include <iostream>
using namespace std;
int main()
{
    int n = 45687;
    int rev = 0;

    while (n > 0)
    {
        int LastDigit = n % 10;
        n = n / 10;
        rev = (rev * 10) + LastDigit;
    }

    cout << "Reverse no is: " << rev << endl;

    return 0;
}