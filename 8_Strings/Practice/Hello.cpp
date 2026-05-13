#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    if(s.front()=='[' && s.back() == ']'){
        s=s.substr(1,s.length()-2);
    }
    stringstream ss(s);
    string temp;
    vector<string> arr;
    while(getline(ss,temp,',')){
        int num = stoi(temp);
        arr.push_back(temp);
    }
    // Function Call
    return 0;
}
