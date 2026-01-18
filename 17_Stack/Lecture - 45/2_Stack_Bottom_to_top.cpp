#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    stack<int> temp;

    // Push elements into stack
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    // Reverse the stack
    while (!s.empty()) {
        temp.push(s.top());
        s.pop();
    }
 
    
    // Print bottom to top
    cout << "Stack elements from bottom to top: ";
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }

      
    return 0;
}
