#include<bits\stdc++.h>
using namespace std;
void tmaxmin(vector<int>&arr){
    int n = arr.size();
    int mx = INT_MIN ,smx = INT_MIN,tmx = INT_MIN;
    int mn = INT_MAX, smn = INT_MAX, tmn = INT_MAX;
    //Third max
    for(int i = 0;i<n;i++){
        if(arr[i]>mx){
            tmx = smx;
            smx = mx;
            mx = arr[i];
        }
        else if(arr[i]>smx){
            tmx = smx;
            smx = arr[i];
        }
        else if(arr[i]>tmx){
            tmx = arr[i];
        }
    }
    //Third Min
    for(int i = 0;i<n;i++){
        if(arr[i]<mn){
            tmn = smn;
            smn = mn;
            mn = arr[i];
        }
        else if(arr[i]<smn){
            tmn = smn;
            smn = arr[i];
        }
        else if(arr[i]<tmn){
            tmn = arr[i];
        }
    }
    cout<<tmx<<" "<<tmn;
    
}
int main(){
    string s;
    getline(cin,s);

    if(s.front()=='[' && s.back()==']'){
        s = s.substr(1,s.length()-2);
    }
    
    stringstream ss(s);
    string temp;
    vector<int>arr;
    while(getline(ss,temp,',')){
        int num = stoi(temp);
        arr.push_back(num);
    }
    tmaxmin(arr);
    return 0;
}