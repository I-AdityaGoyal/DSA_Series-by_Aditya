#include <iostream>
using namespace std;

// Inline or not -> Depend on Compiler
inline int getMax(int &i, int &j)
{
    return (i > j) ? i : j;
}

int main()
{
    int i = 5, j = 10;
    int ans = 0;

    ans = getMax(i, j); // Fun Code will get replaced with the Function Name!

    cout << "Maximum is: " << ans << endl;

    return 0;
}