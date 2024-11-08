#include <iostream>
using namespace std;
void print(int *ptr)
{
    cout << "Inside Fun: " << *ptr << endl;
}

void update(int *ptr)
{
    *ptr = *ptr + 1;
    cout << "inside *ptr " << *ptr << endl;

    cout << "inside ptr before +1 " << ptr << endl;
    ptr = ptr + 1;
    cout << "inside ptr after +1 " << ptr << endl;
}

int getSum(int arr[], int n) { // same as *arr == arr[], addres of that block

    cout << endl << "Size : " << sizeof(arr) << endl;

    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int num = 10;
    int *ptr = &num;

    cout << "In main num is: " << *ptr << endl;
    print(ptr);

    cout << endl;

    cout << "Before *ptr " << *ptr << endl;
    cout << "Before ptr " << ptr << endl;
    cout << endl;
    update(ptr);
    cout << endl;
    cout << "After *ptr " << *ptr << endl;
    cout << "After ptr " << ptr << endl;

    cout << endl;

    int arr[5] = {1,2,3,4,5};

    cout<<"Sum of all is: "<< getSum(arr, 5)<<endl;
    
    cout<<"Sum of a part  is: "<< getSum(arr + 2, 2)<<endl;
    


    return 0;
}