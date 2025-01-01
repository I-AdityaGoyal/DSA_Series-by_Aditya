#include <iostream>
using namespace std;

int getSum(int n, int sum = 0)
{
    if (n == 0) return sum;


    // -> USE any ONE of BELOW!
    // return getSum(n - 1, sum + n); // Parameterised Way

    return n + getSum(n - 1); // Functional Way
}

int main()
{
    int sum = 0;
    sum = getSum(5, sum);
    cout << "Sum is " << sum << endl;

    return 0;
}