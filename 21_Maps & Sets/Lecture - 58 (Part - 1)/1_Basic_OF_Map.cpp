#include<bits/stdc++.h>
using namespace std;
int main(){

    // pair<string,char> p;
    // p.first = "abc";
    // p.second = 'd';
    // cout<<p.first<<" "<<p.second<<endl;     

    unordered_map<string, int> m; // This is a map of integers to integers
    pair<string,int> p1;
    p1.first = "Raghav";
    p1.second = 76;
    m.insert(p1);   

    m["Harsh"] = 85;
    m["Sanket"] = 80;
    // for(pair <string,int> p : m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }  

    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    cout<<m.size()<<endl; // This will print the size of the map, which is 3

    //delete
    m.erase("Raghav"); // This will remove the key "Raghav" from the map
    
    m.erase("Sanket"); // This will remove the key "Sanket" from the map
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    cout<<m.size()<<endl; // This will print the size of the map, which is 1
}