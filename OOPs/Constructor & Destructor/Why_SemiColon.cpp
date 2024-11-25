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

}obj(23);


int main()
{

    return 0;
}