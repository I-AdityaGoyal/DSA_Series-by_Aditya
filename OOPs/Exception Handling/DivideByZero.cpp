#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{

    try
    {
        int numerator;
        int denominator;

        cin >> numerator >> denominator;
        int res;

        if (denominator == 0)
        {
            throw("Division by zero not allowed!");
        }

        res = numerator / denominator;
        cout << "Result after division: " << res << endl;
    }

    catch (const char *e)
    {
        cout << "Exception " << e << endl;
    }

    return 0;
}