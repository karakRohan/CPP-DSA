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
       if(s.size()==0){
        cout<<"Invalid Name : ";
          return; 
       } 
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
    void getAge(int a){
        if(age<0 || age>100){
            cout<<"Invalid Age : ";
            return;
        }
        age = a;
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

    string get_Grade(int pin){
        if(pin == 1234){
            return Grade;
        }
        else{
            return "Invalid Pin";
        }
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
    // s1.getAge();
    s1.getRollNo();
    s1.getGrade();
    s1.getCompanyName();

    cout<<endl;
    cout<<"Roll No: "<<s1.getroll_no()<<endl;

    cout<<"Grade: "<<s1.get_Grade(1234)<<endl;
}