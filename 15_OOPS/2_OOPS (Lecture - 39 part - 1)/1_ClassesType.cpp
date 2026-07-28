// #include<bits/stdc++.h>

// class Player{
//     public:
//     int score;
//     int health;
//     // char[20] name;
// };

// using namespace std;
// int main(){
//     // ignore These Lines
//     #ifndef ONLINE_JUDGE
//     freopen ("input.txt","r",stdin);
//     freopen ("output.txt","w", stdout);
//     #endif

//     // int a=10;
//     Player amit;
//     amit.score = 90;
//     amit.health = 100;
//     // amit.name = "name";
//     // cout<<amit.name<<endl;
//     cout<<amit.score<<endl;
//     cout<<amit.health<<endl;
// } 




#include<bits/stdc++.h> 
using namespace std;

class Player {
public:
    int score; // Data Members
    int health;
    char name[20];   // fixed char array
};

int main() {

    int score[100] = {};
    int health[100] ={};
    Player player[10];

    Player amit;
    amit.score = 90;
    amit.health = 100;
    player[0] = amit;
    strcpy(amit.name, "Amit");   // safely copy string

    cout << "Name: " << amit.name << endl;
    cout << "Score: " << amit.score << endl;
    cout << "Health: " << amit.health << endl;

    Player Rohan;
    Rohan.score = 100;
    Rohan.health = 200;
    player[1] = Rohan;
    cout << "Rohan Score: " << Rohan.score << endl;
    cout << "Rohan Health: " << Rohan.health << endl;

    Player Ayan;
    Ayan.score = 100;
    Ayan.health = 200;
    cout << "Ayan Score: " << Ayan.score << endl;
    cout << "Ayan Health: " << Ayan.health << endl;
   
    return 0;
}
