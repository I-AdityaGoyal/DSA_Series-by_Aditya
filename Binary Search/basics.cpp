#include <iostream>
#include <vector>
using namespace std;

int linear_search(int arr[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == key)
            return i;
    }

    return -1;
    
}

int binary_search(int arr[], int n, int key){
    int start = 0;
    int end = n-1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if(arr[mid] == key){
            return mid;
        }

        else if(arr[mid] < key) {
            start = mid +1;
        }

        else{
            end = mid -1;
        }
    }

    return -1;
    
}


int main()
{
    int arr[5] = {1,2,3,4,5};

    // int idx = linear_search(arr, 5, 3 );

    int idx = binary_search(arr, 5, 3 );

    cout<<"index ye hai: "<<idx;

    
    return 0;
}