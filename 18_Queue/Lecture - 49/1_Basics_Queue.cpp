#include <bits/stdc++.h>
using namespace std;
void display(queue<int> q){
    int n = q.size();
    for(int i=1;i<=n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reverse(queue<int> &q){
    stack<int> st;
    // Empty the queue into stack
    while(q.size()>0){
        int x = q.front();
        q.pop();
        st.push(x);
    }
    // Empty the stack into queue
    while(st.size()>0){
        int x = st.top();
        st.pop();
        q.push(x);
    }
}
int main(){
    queue<int> q;
    // push , pop , front , back , size , empty
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // cout<<"Front Element: "<<q.front()<<endl;
    // cout<<"Back Element: "<<q.back()<<endl;
    // cout<<"Size: "<<q.size()<<endl;
    // cout<<"Empty or not: "<<q.empty()<<endl;
    display(q);
    reverse(q);
    // q.pop();
    display(q); 
    reverse(q);
    display(q);  
    
}