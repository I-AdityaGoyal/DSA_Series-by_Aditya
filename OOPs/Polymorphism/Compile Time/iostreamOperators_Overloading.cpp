#include <iostream>
using namespace std;


/*
-> A friend function is a function that is not a member of a class but
    has access to its private and protected members.

-> The >> and << operators are not part of the Complex class by default,
    so we overload them as friend functions to give them access to the private
    members (real and imag) of the Complex class.


-> friend istream &operator>>(istream &input, Complex &C)
    // cin is the input stream object, and it uses the overloaded operator>> to read the input.
    // c1 is passed by reference, so the function can directly modify its internal state (real and imaginary parts).


-> friend ostream &operator<<(ostream &output, Complex &C)
    // cout is the output stream object, and it uses the overloaded operator<< to print c3.
    // c3 is passed as a constant reference so that it cannot be modified inside the operator<< function,
        and it allows us to access the private data (real and imag) of c3 for output.


-> Why istream& and ostream&  used and passed as Refernce?
    // Returning by reference avoids unnecessary copying of the stream object
    // istream& operator>> returns the input stream (istream&) so that multiple input operations
        can be chained together (e.g., cin >> c1 >> c2).
    // ostream& operator<< returns the output stream (ostream&) so that multiple output operations
        can be chained together (e.g., cout << c1 << c2).


*/


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

    Complex operator+(Complex &C)
    {
        Complex temp;
        temp.real = this->real + C.real;
        temp.imag = this->imag + C.imag;
        return temp;
    }


    friend istream &operator>>(istream &input, Complex &C)
    {
        cout << "Enter real part: ";
        input >> C.real;
        cout << "Enter imaginary part: ";
        input >> C.imag;
        return input;
    }

    friend ostream &operator<<(ostream &output, Complex &C)
    {
        output << C.real << " +i" << C.imag;
        return output;
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "Enter first complex number:" << endl;
    cin >> c1;

    cout << "Enter second complex number:" << endl;
    cin >> c2;

    c3 = c1 + c2;

    cout << "Complex number 1: " << c1 << endl;
    cout << "Complex number 2: " << c2 << endl;
    cout << "Sum of complex numbers: " << c3 << endl;

    return 0;
}
