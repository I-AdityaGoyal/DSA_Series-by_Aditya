#include <iostream>
using namespace std;
class Person
{
    // By Default Private - Can not access out of class!
private:
    string Mname;
    string Fname;
    int age;
    int addharno;

public:
    // Setters
    void setMname(string s){
        Mname = s;
    }
    void setFname(string Fname){
        Fname = Fname;
    }
    void setage(int a){
        age = a;
    }
    void setaddhar(int addharno){
        addharno = addharno;
    }

    // Getters

    string getMname(){
        return Mname;
    }
    string getFname(){
        return Fname;
    }
    int getage(){
        return age;
    }
    int getaddhar(int pin = 0){
        if (pin == 456)
            return addharno;

        return 0;
    }
};


int main()
{
    Person ram;

    ram.setMname("Kaushalya");
    ram.setFname("Dasharath");
    ram.setage(3);
    ram.setaddhar(123456);

    cout << "Mother: " << ram.getMname() << endl;
    cout << "Father: " << ram.getFname() << endl;
    cout << "Age: " << ram.getage() << endl;
    cout << "Addhar: " << ram.getaddhar(456) << endl;

    return 0;
}