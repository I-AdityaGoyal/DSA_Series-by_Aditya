#include <iostream>
using namespace std;

namespace ns
{
    // A Class in a namespace
    class geek
    {
    public:
        void display()
        {
            cout << "\n ns::geek::display()" << endl;
            ;
        }
    };

    class aditya;
}

class ns ::aditya
{
public:
    void display() { cout << "I'm Outside!" << endl; }
};

using namespace ns;

int main()
{
    // Creating Object of geek Class
    ns::geek obj;

    obj.display();

    aditya ob;
    ob.display();

    return 0;
}