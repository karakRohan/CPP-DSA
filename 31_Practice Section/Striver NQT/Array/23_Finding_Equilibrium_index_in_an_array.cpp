#include<bits/stdc++.h>
using namespace std;

void equilibriumIndex(vector<int>& arr)
{
    for(int i = 0; i < arr.size(); i++)
    {
        int left = accumulate(arr.begin(), arr.begin()+i, 0);

        int right = accumulate(arr.begin()+i+1, arr.end(), 0);

        if(left == right)
        {
            cout << i;
            return;
        }
    }

    cout << -1;
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

    while(getline(ss,temp,',')){
        arr.push_back(stoi(temp));
    }

    equilibriumIndex(arr);

    return 0;
}