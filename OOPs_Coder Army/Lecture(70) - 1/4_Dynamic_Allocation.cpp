#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int age, roll_no;
    string grade;
};

int main(){
    Student *S = new Student();
    (*S).name = "Rohan";
    (*S).age = 20;
    (*S).roll_no = 101;
    (*S).grade = "A";
    cout<<S->name<<endl; // Accessing name using pointer
    cout<<S->age<<endl; // Accessing age using pointer
    cout<<S->roll_no<<endl; // Accessing roll_no using pointer
    cout<<S->grade<<endl; // Accessing grade using pointer

    cout<<sizeof(*S)<<endl; // Size of the Student object
    return 0;
} 