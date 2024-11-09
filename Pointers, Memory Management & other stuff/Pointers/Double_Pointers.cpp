#include <iostream>
using namespace std;
void update(int **p2) {
    // p2 = p2 + 1; // No Change -> Copy of p2 is created for this scope will not affect p2 outside!

    // *p2 = *p2 + 1; // Change -> valve of p, means address stored is ++

    **p2 = **p2 + 1; // Change -> original variable
}

int main()
{
    int n = 10;
    int *p = &n;
    int **p2 = &p;

    cout << n << endl;
    cout << *p << endl;
    cout << **p2 << endl<<endl;

    cout << &n << endl;
    cout << p  << endl;
    cout << *p2<< endl<<endl;

    cout << &p << endl;
    cout << p2 << endl;

    cout << endl << endl;

    cout<< "before " << n << endl;
    cout<< "before " << p << endl;
    cout<< "before " << p2 << endl;
    update(p2);
    cout<< "after " << n << endl;
    cout<< "after " << p << endl;
    cout<< "after " << p2 << endl;

    cout << endl << endl;


    return 0;
}