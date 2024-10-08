#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n = 11;
    int cnt = 0;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if (i != (n / i))
                cnt++;
        }
    }

    if (cnt == 2)
        cout << "Prime Hai";
    else
        cout << "Prime Nahi Hai";

    return 0;
}