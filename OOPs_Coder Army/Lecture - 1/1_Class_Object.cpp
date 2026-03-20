#include<bits/stdc++.h>
using namespace std;

class Student{
    // class definition
    public:
    string name;
    int age, roll_no;
    string Grade;
    string company_name = "Google";

};

int main(){
    Student s1;
    s1.name = "Rohan";
    s1.age = 22;
    s1.roll_no = 101;
    s1.Grade = "A";
    s1.company_name = "Google";

    Student s2; 
    s2.name = "Ayan";
    s2.age = 23;
    s2.roll_no = 101;
    s2.Grade = "A";
    s2.company_name = "Amazon";

    cout<<"Name: "<<s1.name<<endl;
    cout<<"Age: "<<s1.age<<endl;    
    cout<<"Roll No: "<<s1.roll_no<<endl;
    cout<<"Grade: "<<s1.Grade<<endl;
    cout<<"Company: "<<s1.company_name<<endl;

    cout<<endl;

    cout<<"Name: "<<s2.name<<endl;
    cout<<"Age: "<<s2.age<<endl;    
    cout<<"Roll No: "<<s2.roll_no<<endl;
    cout<<"Grade: "<<s2.Grade<<endl;
    cout<<"Company: "<<s2.company_name<<endl;

}