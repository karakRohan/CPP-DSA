#include <bits/stdc++.h>
using namespace std;

void displayRev(stack<int>& stack1){
    if(stack1.size()==0) return;
    int x = stack1.top();
    cout << x << " ";
    stack1.pop();
    displayRev(stack1);
    stack1.push(x);
}

void display(stack<int>& stack1){
    if(stack1.size()==0) return;
    int x = stack1.top();
    stack1.pop();
    display(stack1);
    cout << x << " ";
    stack1.push(x);
}
void pushAtBottom(stack<int>& stack1, int val){
    if(stack1.size()==0){
        stack1.push(val);
        return;
    }
    int x = stack1.top();
    stack1.pop();
    pushAtBottom(stack1, val);
    cout<<x<<" ";
    stack1.push(x);
}

int main(){
    stack<int> stack1;
    stack1.push(10);
    stack1.push(20);
    stack1.push(30);
    stack1.push(40);
    stack1.push(50);

    // display(stack1);
    pushAtBottom(stack1, -10);
    cout << endl;
    display(stack1);
 
    
    return 0;
}