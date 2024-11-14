#include <iostream>
using namespace std;

int &fun(int num)
{
    // ans Var is vaild in memory for this scope only!
    int &ans = num;
    return ans; // It will return some Garbadee Memory Address!
}

void PassByReference(int &n)
{
    n++;
    
    cout<<"Inside: "<<n<<endl;

}

void PassByValue(int n)
{
    n++;
    cout<<"Inside: "<<n<<endl;
}

int main()
{
    // int a = 10;

    // // reference variable
    // int &b = a;

    // cout << "Original a: " << a << endl;
    // a++;
    // cout << "Increment in a: " << a << endl;

    // b++;

    // cout << "Increment in b change in a: " << a << endl;
    // cout << "Increment in b change in b: " << b << endl << endl;

    int num = 5;

    cout << "Num Before: " << num << endl;

    // PassByValue(num);

    PassByReference(num);

    cout << "After Before: " << num << endl;

    // Bad Practice -> Returning Address|Pointer from a Function

    fun(num);

    return 0;
}