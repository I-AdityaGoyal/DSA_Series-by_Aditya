#include <iostream>
using namespace std;

void getInput(int *arr, int &n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Value at " << i << " index: ";
        cin >> arr[i];
    }
}

int getSum(int *arr, int n)
{

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cout << "Size of arr: ";
    cin >> n;

    // int arr[n]; // Bad Practice

    int *arr = new int[n];

    getInput(arr, n);

    int ans = getSum(arr, n);
    cout<< "Sum of Arr: "<< ans;

    return 0;
}