#include<bits/stdc++.h>
using namespace std;

void symmetricPair(vector<pair<int,int>>& arr)
{
    map<int,int> mp;

    for(auto it : arr)
    {
        int first = it.first;
        int second = it.second;

        if(mp[second] == first)
        {
            cout << "(" << first << "," << second << ") ";
        }

        mp[first] = second;
    }
}

int main(){

    string s;
    getline(cin,s);

    vector<pair<int,int>> arr;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(' || s[i] == ')' || s[i] == ',')
        {
            s[i] = ' ';
        }
    }

    stringstream ss(s);

    int a,b;

    while(ss >> a >> b)
    {
        arr.push_back({a,b});
    }

    symmetricPair(arr);

    return 0;
}