#include<bits/stdc++.h>
using namespace std;

class Student{
    // class definition
    private:
    string name;
    int age, roll_no;
    string Grade;
    string company_name = "Google";
    // Function using getter and setter
    public:
    void setName(string s){
       name = s;
    }
    void setAge(int a){
        age = a;
    }
    void setRollNo(int r){
        roll_no = r;
    }
    void setGrade(string g){
        Grade = g;
    }
    void setCompanyName(string c){
        company_name = c;
    }

    void getName(){
        cout<<name<<endl;
    }
    void getAge(){
        cout<<age<<endl;
    }
    void getRollNo(){
        cout<<roll_no<<endl;
    }
    void getGrade(){
        cout<<Grade<<endl;
    }
    void getCompanyName(){
        cout<<company_name<<endl;
    }
    int getroll_no(){
        return roll_no;
    }
};

int main(){
    Student s1;
    s1.setName("Rohan");
    s1.setAge(22);
    s1.setRollNo(101);
    s1.setGrade("A");
    s1.setCompanyName("Google");   

    s1.getName();
    s1.getAge();
    s1.getRollNo();
    s1.getGrade();
    s1.getCompanyName();

    cout<<endl;
    cout<<"Roll No: "<<s1.getroll_no()<<endl;

}