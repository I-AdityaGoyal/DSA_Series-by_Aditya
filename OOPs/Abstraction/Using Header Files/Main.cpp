#include <iostream>
#include "MyFile.h"

using namespace std;

int main() {
    cout << "Addition: " << MyFile::add(5, 3) << endl;
    cout << "Multiplication: " << MyFile::multiply(5, 3) << endl;
    return 0;
}


/*
We have to run both MyFile.cpp & Main.cpp together 
--------->>> g++ Main.cpp MyFile.cpp -o Main

Then, .\main.exe
*/