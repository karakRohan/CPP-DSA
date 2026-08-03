#include<bits/stdc++.h> 
using namespace std;

class Player {
public:
    int score; // Data Members
    int health;
    char name[20];   // fixed char array

    void showHealth(){ // member function
        cout<<"Health is : "<<health<<endl;;
    }
    void showScore(){
        cout<<"Score : "<<score<<endl;
    }
};

class Calculator{
public:
    int a; // Data Member 
    int b;
    void add(){  // Member Functions
        cout<<a+b<<endl;
    }
    void subtract(){
        cout<<a-b<<endl;
    }
};

int main() {

    int score[100] = {};
    int health[100] ={};

    Player amit;
    amit.score = 90;
    amit.health = 100;
    strcpy(amit.name, "Amit");   // safely copy string


    amit.showHealth();
    amit.showScore();

    Calculator calci;
    calci.a = 10;
    calci.b = 7;
    calci.add();
    calci.subtract();



    return 0;
}
