#include <iostream>
// using namespace std;

// first name space
namespace first_space
{
    void func()
    {
        std ::cout << "Inside first_space" << std ::endl;
    }
}

// second name space
namespace second_space
{
    void func()
    {
        std ::cout << "Inside second_space" << std ::endl;
    }
}

using namespace first_space;

int main()
{
    // This calls function from first name space.
    func();

    std::cout << std::endl;

    // Calls function from second name space.
    second_space ::func();
    return 0;
}