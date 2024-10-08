#include <iostream>
using namespace std;

int main()
{
    int n = 1289;
    int cnt = 0;

    while (n > 0)
    {
        int LastDigit = n % 10;
        cnt++;
        n = n / 10;

        cout << cnt << " Place digit is: " << LastDigit << " & no. become: " << n << endl;
    }

    return 0;
}