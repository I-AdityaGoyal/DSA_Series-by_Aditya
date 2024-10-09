#include <iostream>
using namespace std;
int main()
{
    int n = 13;
    int temp = n;
    int sum = 0;

    while (n > 0)
    {
        int LastDigit = n % 10;
        sum = sum + (LastDigit * LastDigit * LastDigit);
        n = n / 10;
    }
    

    if (temp == sum)
        cout << "Armstrong hai";
    else
        cout << "Armstrong Nhi hai!";

    return 0;
}