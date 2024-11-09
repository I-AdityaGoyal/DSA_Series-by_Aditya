#include <iostream>
using namespace std;
int main()
{
    // 1 -> NULL Pointers

    
    int *p1 = NULL; // NULL is constant with vaue 0
    int *q = 0;     // Same as above

    cout << "The value of ptr is " << p1 << endl<<endl;



    // 2 -> Void Pointers

    void *ptr;
    int i = 10;

    cout<<"Pointing to a garbage address: "<<ptr<< endl;
    // cout<<*ptr<<endl; // error it cant be dereferenced

    // assign int address to void
    ptr = &i;

    cout << "Address of variable i " << &i << endl;
    cout << "Address where the void pointer is pointing " << ptr << endl<<endl;
    // cout<<"Value of i using *ptr: "<<*ptr<<endl;  // error it cant be dereferenced



    // 3 -> Wild Pointers

    int *p; // when declared but not initialized
    // Contains garbage value
    
    int a = 10;

    cout<<"Value of A before: "<<a<<endl;

    p = &a;  /* p is not a wild pointer now*/
    *p = 12; /* This is fine. Value of a is changed */

    cout<<"Value of A after: "<<a<<endl<<endl;





    return 0;
}