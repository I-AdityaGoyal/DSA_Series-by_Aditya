#include <iostream>

using namespace std;

void input(int arr[], int n)
{
    cout << "input array:" << endl;

    for (int i = 0; i < n; i++)
    {
        
        cin>>arr[i];
    }
}

void print(int arr[], int n)
{
    cout << "printting array:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        // cin>>arr[i];
    }
}
int main()
{
    int arr[5] = {1,2,4,5,6};

    // cout<<"1st: "<<arr[0]<<endl;
    // cout<<"2nd: "<<arr[1]<<endl;
    // cout<<"4th: "<<arr[3]<<endl;

    // input(arr, 5);
    // print(arr, 5);

    // int size = sizeof(arr) / sizeof(int);
    // cout<<"size of array is: "<<size<<endl;
    // cout<<"memory in ram: "<< sizeof(arr)<<endl;

    // char ch[6] = {'a', 'b', 'c', 'c', 'd', 'e'};

    // for (int i = 0; i < 6; i++)
    // {
    //     cout << ch[i] << " ";
    // }

    return 0;
}