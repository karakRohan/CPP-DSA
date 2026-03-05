#include<bits/stdc++.h>
using namespace std;

int main(){
    // Max Heap
    priority_queue<int> pq; // Max Heap
    pq.push(10);
    pq.push(2);
    pq.push(-6);
    pq.push(8);
    cout<<"Max Heap Top element: "<<pq.top()<<endl; // 10
    pq.pop(); // Remove 10
    cout<<"Max Heap Pop element: "<<pq.top()<<endl; // 8

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> min_pq; // Min Heap
    min_pq.push(10);
    min_pq.push(2);
    min_pq.push(-6);
    min_pq.push(8);
    cout<<"Min Heap Top element: "<<min_pq.top()<<endl; // -6
    min_pq.pop(); // Remove -6
    cout<<"Min Heap Pop element: "<<min_pq.top()<<endl; // 2

}