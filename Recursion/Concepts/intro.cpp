#include <iostream>
using namespace std;

void fun1(int i)
{
    cout << "Fun " << i << endl;
}
void fun2(int i)
{
    cout << "Fun " << i << endl;
    fun1(i-1);
}
void fun3(int i)
{
    cout << "Fun " << i << endl;
    fun2(i-1);
}

void print(int i)
{
    // 1. Base Case - stop condition
    if (i == 0)
    {
        cout << "Base Case reached" << endl;
        return;
    }

    // 2. Processing
    cout << "Calling Fun: " << i << endl;

    // 3. Recursive Relation
    print(i - 1);
}

int main()
{
    /* Iterative */
    int i = 5;
    // while (i > 0)
    // {
    //     cout << "Iterative Fun: " << i << endl;
    //     i--;
    // }

    /* Seperate Calls */
    // fun3(3);
    // fun2(2);
    // fun1(1);

    /* Recursion */
    print(5);

    return 0;
}