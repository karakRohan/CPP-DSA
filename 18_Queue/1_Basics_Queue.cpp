#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    // push
    //pop
    // front -> top
    //size, empty
    // back
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<"Front Element: "<<q.front()<<endl;
    cout<<"Back Element: "<<q.back()<<endl;
    cout<<"Size: "<<q.size()<<endl;
    cout<<"Empty or not: "<<q.empty()<<endl;
    
}