#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 36;
    // Divisions: 1, 2, 3, 4, 6, 9, 12, 18, 36;

    // Logic - 1;
    /*
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
    */
    cout << endl;

    // Logic - 2
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";

            if (i != (n / i))
                cout << n / i << " ";
        }
    }

    cout << endl;
    return 0;
}
