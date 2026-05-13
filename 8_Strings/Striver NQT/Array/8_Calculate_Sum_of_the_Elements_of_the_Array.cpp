#include<bits/stdc++.h>
using namespace std;

void findSum(vector<int>& arr){
    int sum = accumulate(arr.begin(), arr.end(), 0);
    cout <<sum;
}

int main(){
    string s;
    getline(cin, s);
    // Remove { } and ,

    if(s.front() == '{' && s.back() == '}'){
        s = s.substr(1, s.length() - 2);
    }
    stringstream ss(s);
    string temp;
    vector<int> arr;
    while(getline(ss, temp, ',')){
        int num = stoi(temp);
        arr.push_back(num);
    }
    // FFunction Call
    findSum(arr);
    return 0;
}