#include<bits/stdc++.h>
using namespace std;
class MinHeap{
public:
    int arr[50];
    int idx;
    MinHeap(){ // Default Constructor
        idx = 1;
    }
    
    int top(){
        return arr[1];
    }
    void push(int x){
        arr[idx] = x;
        int i = idx;
        idx++;
        // Swaping of 1 with parent till i == 1
        while(i  != 1){
            int parent = i/2;
            if(arr[i]< arr[parent]){
                swap(arr[i], arr[parent]);
            }
            else break;
            i = parent;
        }
    }
    int size(){
        return idx-1;
    }
};

int main(){
    MinHeap pq;
    pq.push(10);
    pq.push(20);
    pq.push(11);
    pq.push(30);
    pq.push(40);
    pq.push(12);
    pq.push(4);
    pq.push(7);
    pq.push(2);   
    cout<<"Size of Min Heap :- "<<pq.size()<<endl;
    cout<<"Top Element :- "<<pq.top()<<endl; 

}