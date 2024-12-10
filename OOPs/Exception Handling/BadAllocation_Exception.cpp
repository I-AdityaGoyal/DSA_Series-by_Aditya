#include <iostream>
#include <exception>

using namespace std;


// Default Main 
// int main()
// {
//     int s = 1e9;
//     int *ptr = new int[s];
//     cout << "Memory Allocated: " << endl;

//     delete[] ptr;
// }

/*
---------------------------------- Not Exactaly -> But Inside Exception Class -------------------------------
class exception
{
protected:
    string message;

public:

    exception(const char *message)
    {
        this->message = message;
    }

    string what(){
        return message;
    }
};
*/


int main()
{
    try
    {
        int s = 1e9;
        int *ptr = new int[s];
        cout << "Memory Allocated: " << endl;

        delete[] ptr;
    }
    catch (const exception &e)
    {
        cout << "Memory allocation failed: " << e.what() << endl;
    }
    return 0;
}

