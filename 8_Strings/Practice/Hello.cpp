#include<bits/stdc++.h>
using namespace std;
int main(){
    string line;
    getline(cin,line); // Read entire line
    stringstream ss(line);
    vector<int> arr;
    int num;
    while(ss>>num) arr.push_back(num);
    for(int x : arr) cout<<x<<" ";
    return 0;
}
