#include <iostream>
#include <vector>
using namespace std;

void reverseArr(vector<int> &arr, int l, int r)
{
    if (l >= r)
        return;

    swap(arr[l], arr[r]);

    reverseArr(arr, l + 1, r - 1);
}

void reverseArr(vector<int> &arr, int i)
{
    int n = arr.size();
    if (i >= n / 2)
        return;

    swap(arr[i], arr[n - i - 1]);

    reverseArr(arr, i + 1);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    reverseArr(arr, 0, 4); // 54321

    reverseArr(arr, 0); // 12345

    for (auto &it : arr)
    {
        cout << it << " ";
    }

    return 0;
};