#include <iostream>
#include <vector>
using namespace std;

void input(vector<int> v){

    for(int i =0; i<6; i++){

        v.push_back(i);
    }
    v.pop_back();

    cout<<"printting array:"<<endl;
    for(int i =0; i<v.size(); i++){

        cout<<v[i]<<" ";
    }
    cout<<endl;

}

void print(vector<int> v){

    cout<<"printting array:"<<endl;
    for(int i =0; i<v.size(); i++){

        cout<<v[i]<<" ";
    }
    cout<<"size:"<<v.size();
}

int main()
{
    vector<int> v;

    input(v);

    print(v);
    
    return 0;
}