#include<bits/stdc++.h>
using namespace std;

void rearrange(vector<int>& arr)
{
    sort(arr.begin(), arr.end());

    int n = arr.size();

    // First half increasing
    for(int i = 0; i < n/2; i++)
    {
        cout << arr[i] << " ";
    }

    // Second half decreasing
    for(int i = n-1; i >= n/2; i--)
    {
        cout << arr[i] << " ";
    }
}

int main(){

    string s;
    getline(cin,s);

    if(s.front()=='[' && s.back()==']'){
        s = s.substr(1,s.length()-2);
    }

    stringstream ss(s);
    string temp;
    vector<int> arr;

    while(getline(ss,temp,' ')){
        if(temp!=""){
            int num = stoi(temp);
            arr.push_back(num);
        }
    }

    rearrange(arr);

    return 0;
}