#include <iostream>

using namespace std;
int main()
{
    int a = 8;
    int b = 9;

    char c = 't';

    if (a==b)
    {
        if( c=='i')    
            cout<<"sab sahi hai!"<<endl;
        else
            cout<<"theek nhi hai"<<endl;
    }
    else{

        if(c=='q')
            cout<<"else mai hu!";
        
    }
    

    // if (a > b)
    // {
    //     cout << "a bada hai!" << endl;
    // }
    // else if (b > a)
    // {
    //     cout << "b bada hai !" << endl;
    // }
    // else
    // {
    //     cout << "dono same hai!" << endl;
    // }

    return 0;
}