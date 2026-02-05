#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "2+6*4/8-3"; // Infix Expression
    // We need to stacks, 1 for values, 1 for operators
    stack<int> values;
    stack<char> ops;
    for(int i=0; i<s.length(); i++){
        // check if s[i] is a digit (0-9)
        if(s[i]>=48 && s[i]<=57){
            
        }
    }
}