#include <iostream>
using namespace std;
int main()
{

    int n = 1122552211;

    int rev = 0;
    int dup = n;

    while (n > 0)
    {
        int LastDigit = n % 10;
        n = n / 10;
        rev = (rev * 10) + LastDigit;
    }

    if (dup == rev)
        cout << "Palindrome!";
    else
        cout << "Not a Palindrome!";

    return 0;
}