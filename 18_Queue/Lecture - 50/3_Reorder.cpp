#include<bits/stdc++.h>
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


void reorder (queue<int>& q){
    stack<int> st;
    int n = q.size();
    // Pop the first half of the queue and push it onto the stack
    for(int i=1;i<=n/2;i++){
        st.push(q.front());
        q.pop();
    }
    // Empty the stack back into the queue
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    // Pop 2nd half (now the first) of the q to the st
    for(int i=1;i<=n/2;i++){
        st.push(q.front());
        q.pop();
    }
    // Most Imortant Step: Interleave the elements of the stack and queue
    while(st.size()>0){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    // Reverse the queue to get the final order
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
}

int main(){
    queue<int> q; 
    q.push(1);
    q.push(2);
    q.push(3);    
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    display(q);
    reorder(q);
    display(q);
}