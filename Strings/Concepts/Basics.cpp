#include <iostream>
#include <string>

using namespace std;
int main()
{
    // char arr[] = {'a', 'd', 'i', 't', 'y', 'a'};

    // for (int i = 0; i < 6; i++)
    //     cout << arr[i];

    // cout << endl;


    // char arr2[20];

    // cin >> arr2;

    // arr2[3] = '\0';

    // cout << arr2 << endl;




    // string s1 = "Aditya";
    // cout << s1;


    // string s2;
    // cin >> s2;
    // cout << s2 << endl;


    // string s3;
    // getline(cin,s3);
    // cout<<s3;


    //Operations on String

    string s1 = "Aditya";
    string s2 = "Goyal";
    string s3 = s1 + s2;
    // cout<<s3<<endl;

    // s3 = s1 + " " + s2;
    // cout<<s3<<endl;

    // s1.push_back('G');
    // cout<<s1<<endl;
    // s1.pop_back();
    // cout<<s1<<endl;


    ///// ----> ESCAPE CHAR

    // Print -> "Make sure you "Like" the video & "Subscribe" the channel!"
    
    string s = "Make sure you \"Like\" the video & \"Subscribe\" the channel!";
    cout<<s<<endl;

    s = "\\0";
    cout<<s;




    





}