#include <iostream>
using namespace std;

class Area
{
public:

    /* Function Overloading is defined as ---->>>>>
    When two or more functions have same name but different parameters are passed to the function. */
    // Same Function Multiple Uses!

    int CalculateArea(int r) // Area of Circle
    {
        return 3.14 * r * r;
    }

    int CalculateArea(int l, int b) // Area of Rectangle
    {
        return l * b;
    }

    /* cannot overload functions distinguished by return type alone */
    
};

int main()
{
    Area a;

    cout << a.CalculateArea(5) << endl;

    cout << a.CalculateArea(5, 5) << endl;

    return 0;
}