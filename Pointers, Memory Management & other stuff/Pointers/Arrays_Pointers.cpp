#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {5, 10, 15, 20, 25};

    cout << "address of first memory block is " << arr << endl;
    cout << "address of first memory block is " << &arr << endl;
    cout << "address of first memory block is " << &arr[0] << endl;

    cout << "value at first memory block is " << arr[0] << endl;
    cout << "value at first memory block is " << *arr << endl<< endl;

    

    // what we came to know is->

    cout << "0th index value: " << *(arr + 0) << endl; // arr[0]
    cout << "1st index value: " << *(arr + 1) << endl; // arr[1]
    cout << "2nd index value: " << *(arr + 2) << endl; // arr[2]
    cout << "3rd index value: " << *(arr + 3) << endl; // arr[3]
    cout << "4th index value: " << *(arr + 4) << endl; // arr[4]

    // Conclusion:
    // arr is a pointer to the first element of the array.
    // arr + i is a pointer to the ith element of the array.
    // *(arr + i) is the ith element of the array.

    // arr[i] = *(arr + i)
    // i[arr] = *(i + arr)

    cout << "3rd index: " << arr[3] << " - " << 3 [arr] << endl<< endl;





    int temp[5] = {1, 2, 3, 4, 5};

    cout << "Size of temp: " << sizeof(temp) << endl;
    cout << "Size of *temp " << sizeof(*temp) << endl;
    cout << "Size of &temp " << sizeof(&temp) << endl; // depend on compiler

    int *ptr = &temp[0];
    cout << "Size of ptr: " << sizeof(ptr) << endl;  // DOC
    cout << "Size of *ptr " << sizeof(*ptr) << endl; // int
    cout << "Size of &ptr " << sizeof(&ptr) << endl<< endl; // DOC

    cout << "Value of &temp[0]: " << &temp[0] << endl;
    cout << "Value of temp " << temp << endl;
    cout << "Value of &temp " << &temp << endl;

    cout << "Value of ptr: " << ptr << endl;
    cout << "Value of *ptr " << *ptr << endl;
    cout << "Value of &ptr " << &ptr << endl<< endl;





    int *ptr2 = &arr[0];

    cout << ptr2 << endl;
    cout << "value : " << *ptr2 << endl;
    ptr2 = ptr2 + 1; // only use to send a part of array
    cout << ptr2 << endl;
    cout << "value : " << *ptr2 << endl;

    return 0;
}