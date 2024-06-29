#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // int arr[2][2] = {{1, 2}, {1, 3}};

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    vector<vector<int>> vec;

    for (int i = 0; i < 5; i++)
    {
        vector<int> v1;
        
        for (int j = 0; j < 15; j++)
        {
            v1.push_back(0);
        }

        vec.push_back(v1);
    }

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }

    return 0;
}