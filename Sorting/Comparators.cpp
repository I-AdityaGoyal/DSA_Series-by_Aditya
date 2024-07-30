#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

bool myComparator(int a, int b)
{
    if (a < b) // ASCE
        return true;

    return false;
}

class myComparator2
{
public:
    bool operator()(int a, int b)
    {
        return a > b; // DESC
    }
};


int main()
{
    vector<int> arr = {1, 5, 4, 0, 2, 3};

    // Printing before sorting
    cout << "\nArray Before Sorting: ";
    print(arr);

    // Default ASCE
    // sort(arr.begin(), arr.end()); // sort(begin(arr), end(arr));

    // For DESC
    // sort(begin(arr), end(arr), greater<int>());

    // 1. Function Pointer
    // sort(arr.begin(), arr.end(), myComparator);

    // 2. Functor
    // sort(arr.begin(), arr.end(), myComparator2());

    auto myLambda = [] (int a, int b){
        return a > b; // DESC
    };

    // 3. Lambda Function
    sort(arr.begin(), arr.end(), myLambda);

    // Printing before sorting
    cout << "\nArray Before Sorting: ";
    print(arr);

    return 0;
}