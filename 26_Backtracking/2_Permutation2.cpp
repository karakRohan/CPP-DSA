#include<bits/stdc++.h>
using namespace std;

void permutation(string &str, int i){
    if(i == str.size() - 1){
        cout << str << endl;
        return;
    }
    for(int idx=i; idx<str.size(); idx++){
        swap(str[idx], str[i]);
        permutation(str, i+1);
        swap(str[i], str[i]); // backtracking step, to restore the original string for the next iteration
    }
}

int main(){
    string input;
    cin >> input;
    permutation(input, 0);
    return 0;
}   
