#include <iostream>
using namespace std;

void print(int i, int n)
{

    if (i > n)
        return;

    // DESCE Order
    print(i + 1, n);

    cout << i << " ";

    // ASCE Order
    // print(i + 1, n);
}

int main()
{
    print(1, 5);
    return 0;
}