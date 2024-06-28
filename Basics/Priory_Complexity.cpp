#include <iostream>
using namespace std;

void rightAngledTriangle(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void invertedRightAngledTriangle(int n)
{
    for (int i = n; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{

    int n = 5;

    // rightAngledTriangle(n);

    invertedRightAngledTriangle(n);


    // for(int i =1; i<=n; i++){
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    return 0;
}