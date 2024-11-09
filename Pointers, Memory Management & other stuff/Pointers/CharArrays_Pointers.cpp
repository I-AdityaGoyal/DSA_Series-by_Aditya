#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[5] = {'a', 'b', 'c', 'd', 'e'};

    // Cout is implemented different for both Int & Char Arrays!

    cout << arr << endl; // Printing Address of 0th index
    cout << ch << endl<<endl;  // Printing entire ch array(string)!

    char *ptr = &ch[0];

    cout << ptr << endl<<endl; // same, until it got a null char!

    cout << "For Address use &ch: " << &ch << endl;


    cout << "0th index value: " << *(ptr + 0) << endl; // arr[0]
    cout << "1st index value: " << *(ch + 1) << endl;  // arr[1]
    cout << "2nd index value: " << *(ptr + 2) << endl; // arr[2]
    cout << "3rd index value: " << *(ch + 3) << endl;  // arr[3]
    cout << "4th index value: " << *(ptr + 4) << endl<<endl; // arr[4]



    // NUll Char:
    ch[3] = '\0';
    cout << "After Null Char: " << ch << endl<<endl; // we have seen this in strings lecture


    char temp1 = 'r';
    char *p1 = &temp1;

    cout << p1 << endl;

    return 0;
}