#include <iostream>
using namespace std;
int main()
{

    // We have learnt till Now is ->

    int a = 5;
    int *ptr = &a;

    cout << "Value of a is: " << a << " - " << *ptr << endl;

    cout << "Address of a is: " << &a << " - " << ptr << endl<< endl;



    // increment in normal variables
    int num = 10;
    int ab = num;

    cout << "ab before: " << ab << endl;
    cout << "num before: " << num << endl;

    ab++;

    cout << "ab after: " << ab << endl;
    cout << "num after: " << num << endl<< endl;



    // incerment using pointers - playing at memory level

    num = 10;
    int *q = &num;

    cout << "num before: " << num << endl;
    cout << "*q before: " << *q << endl;

    (*q)++;

    cout << "num after: " << num << endl;
    cout << "*q after: " << *q << endl<< endl;



    // Copying a Pointer
    int abc = 2;
    int *p = &abc;
    int *p1 = p;

    cout << p << " - " << p1 << endl;
    cout << *p << " - " << *p1 << endl;
    cout << "Addres of 1st pointer p: "<< &p << endl;
    cout << "Addres of 2nd pointer p1: "<< &p1 << endl << endl;


    // (*ptr)++ will increment the vale of variable
    // check for ptr++;

    int i = 1;
    int *t = &i;

    // (*t)++ is same as *t = *t + 1

    cout << "before t " << t << endl;
    cout << "before *t: "<< *t <<endl;
    t = t + 1;
    cout << "after t " << t << endl;
    cout << "after *t: "<< *t <<endl;

    return 0;
}