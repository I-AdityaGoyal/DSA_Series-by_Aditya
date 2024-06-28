#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    auto start = high_resolution_clock::now();

    int a = 10;

    cout << a++ << endl;
    cout << ++a << endl;

    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout <<endl<< "Time taken: "
         << duration.count() << " microseconds" << endl;
}