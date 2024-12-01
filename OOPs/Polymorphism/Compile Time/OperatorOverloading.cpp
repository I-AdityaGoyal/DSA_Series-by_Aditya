#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex() {}

    Complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }

    void print()
    {
        cout << real << " +i" << imag << endl;
    }

    // c1 is calling the operator+ method.
    // c2 is passed as a reference to the method.

    Complex operator+(Complex &C)
    {
        Complex temp;
        temp.real = this->real + C.real;
        temp.imag = this->imag + C.imag;
        return temp;
    }
};

int main()
{
    Complex c1(3, 4);
    ;
    Complex c2(2, 1);

    Complex c3 = c1 + c2;
    cout << "Complex number 1: ";
    c1.print();
    cout << "Complex number 2: ";
    c2.print();
    cout << "Sum of complex numbers: ";
    c3.print();

    return 0;
}