#include <iostream>
using namespace std;

// 1-> Defining Constants with Macros
#define PI 3.14


// 2-> Defining Inline Macro Functions
#define AREA_OF_CIRCLE(radius) (PI * (radius) * (radius))


// 3-> Conditional Expressions in Macros
#define IS_LARGE_NUMBER(num) (num > 1000 ? "Large" : "Small")


// 4-> Multi-Line Macros
#define MAX(a, b) \
    ((a) > (b) ? (a) : (b))

// Use the '\' character to break macros into multiple lines for readability.


// We will use it in Code where ans is required as -> Ans % Mod
#define MOD 1000000007 // 10^9 + 7;


int main()
{
    // 1-> Defining Constants with Macros
    cout << "Value of PI: " << PI << endl;


    // 2-> Defining Inline Macro Functions
    double radius = 3.0;
    cout << "Area of circle with radius " << radius << " is " << AREA_OF_CIRCLE(radius) << endl;


    // 3-> Conditional Expressions in Macros
    int value = 1500;
    cout << "The number " << value << " is considered: " << IS_LARGE_NUMBER(value) << endl;


    // 4-> Multi-Line Macros
    int a = 10, b = 20;
    cout << "The maximum value is: " << MAX(a, b) << endl;

    return 0;
}