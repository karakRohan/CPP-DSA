#include <iostream>
using namespace std;

class Stack { // User defined data structure
public:
    int arr[5];
    int idx;
    Stack(){
        idx = -1;
    } 
    void push(int val){
        if(idx == 4){
            cout<<"Stack is Full"<<endl;
            return;
        }
        idx++;
        arr[idx] = val;
    }
    void pop(){
        idx--;
    }
    int top(){
        return arr[idx];
    }
    int size(){
        return idx + 1;
    }   
};
int main(){
    Stack stack1;
    stack1.push(10);
    stack1.push(20);
    stack1.push(30);
    stack1.push(40);
    cout<<stack1.top()<<endl;  // 40
    cout<<stack1.size()<<endl; // 4
    stack1.pop();  // 40
    cout<<stack1.size()<<endl; // 3
    cout<<stack1.top()<<endl;  // 30

}