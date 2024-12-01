#include <iostream>
using namespace std;

int main()
{

    int numerator;
    int denominator;

    cin >> numerator >> denominator;

    int res;

    if (denominator == 0)
    {
        cout << "Division by zero not allowed!";
    }

    res = numerator / denominator;
    cout << "Result after division: " << res << endl;

    return 0;
}