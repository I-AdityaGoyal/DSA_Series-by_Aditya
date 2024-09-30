#include <iostream>
#include <vector>
#include <string>
using namespace std;

void print(vector<string> &arr)
{
    cout << endl<< "----------Printing----------" << endl;

    for (string &str : arr)
    {
        cout << str << endl;
    }
}

void input(vector<string> &arr)
{
    string input;
    cout << "Enter strings (leave empty to stop):" << endl;

    while (true)
    {
        getline(cin, input);

        if (input.empty())
            break;

        arr.push_back(input);
    }
}

vector<string> LetsGO(vector<string> &masti)
{
    //Ye aaya hai  ----->  {"Aayo", "Bhai,", "thoda", "timepass", "kare!"}

    //Vector hai unke andar har index pr ek string
    // string ko khud ek vector ki thare use kar sakte hai -------- String is a array of characters!

    cout<<"Current String with each word seperation!"<<endl;

    for (int i = 0; i < masti.size(); i++)
    {
        for (int j = 0; j < masti[i].size(); j++)
        {
            cout<<masti[i][j]<<" ";
        }

        cout<<endl;
        
    }

    for (int i = 0; i < masti.size(); i++)
    {
        for (int j = 0; j < masti[i].size(); j++)
            masti[i][j] = '@';
               
    }

    return masti; 

}

int main()
{
    // vector<string> arr = {"THis", "is", "the", "in-depth", "lecture!"};

    // print(arr);

    // vector<string> arr2;
    // input(arr2);
    // print(arr2);

    vector<string> masti;
    masti.push_back("Aayo");
    masti.push_back("Bhai,");
    masti.push_back("thoda");
    masti.push_back("timepass");
    masti.push_back("kare!");

    vector<string> new_str = LetsGO(masti);
    print(new_str);

    return 0;
}