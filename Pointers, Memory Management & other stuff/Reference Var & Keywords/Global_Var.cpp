#include <iostream>
using namespace std;

// Local Var: Only valid in the Scope where they are decleared!
// Global Var: Can Acess AnyWhere in this file!

int age = 18;

void InAyodhya(int &time)
{
    cout << "Age in Ayodhya: " << age << endl;
    // Stay for time = 5 Years;
    age += time;
}

void InVrindavan(int &time)
{
    cout << "Came to Vrindavan after " << time << " years" << endl;

    cout << "Age in Vrindavan: " << age << endl;
}

int main()
{
    cout << "Age in Main: " << age << endl;

    int time = 5;

    InAyodhya(time);
    InVrindavan(time);

    return 0;
}