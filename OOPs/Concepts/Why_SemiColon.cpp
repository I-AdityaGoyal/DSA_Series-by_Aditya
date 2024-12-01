#include <iostream>
using namespace std;

class temp
{
public:
    temp()
    {
        cout << "default constructor" << endl;
    }

    temp(int a){
        cout<<a;
    }

} obj(3);


int main()
{

    return 0;
}