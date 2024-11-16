#include <iostream>
using namespace std;

void TakeInput(int **arr, int &row, int &col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Value for index " << i << j << " :";
            cin >> arr[i][j];
        }
    }
}

void print(int **arr, int &row, int &col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int row;
    cout << "Enter no. of rows: ";
    cin >> row;

    int col;
    cout << "Enter no. of cols: ";
    cin >> col;

    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    TakeInput(arr, row, col);
    cout << endl;
    print(arr, row, col);



    //  Releasing Memory
    // 1. Free Memory for each array at i (arr[i]) -> int*arr[i]
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }

    // 2. Now free the memory for int **arr
    delete[] arr;

    return 0;
}