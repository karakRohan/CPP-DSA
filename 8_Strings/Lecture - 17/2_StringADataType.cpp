#include<iostream>
using namespace std;
int main()
{
    string str = "Rohan Karak is a Student";
    cout<<str<<endl;
    string name;
    cin>>name; //Only if the string has no spaces

    getline(cin,name); //VVI 
    cout<<name<<endl;
}