#include <iostream>
using namespace std;

void print(int arr[], int n = 5, int start)
{

    for (int i = start; i < n; i++)
        cout << arr[i] << " ";

    cout << endl<< endl;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    print(arr, size);

    print(arr, size, 2);

    return 0;
}