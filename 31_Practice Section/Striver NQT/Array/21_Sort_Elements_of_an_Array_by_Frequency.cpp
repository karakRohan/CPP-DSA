#include<bits/stdc++.h>
using namespace std;

void sortFrequency(vector<int>& arr)
{
    map<int,int> mp;

    for(int x : arr)
    {
        mp[x]++;
    }

    sort(arr.begin(), arr.end(), [&](int a, int b){

        if(mp[a] == mp[b])
        {
            return a < b;
        }

        return mp[a] > mp[b];
    });

    for(int x : arr)
    {
        cout << x << " ";
    }
}

int main(){

    string s;
    getline(cin,s);

    if(s.front()=='{' && s.back()=='}'){
        s = s.substr(1,s.length()-2);
    }

    stringstream ss(s);
    string temp;
    vector<int> arr;

    while(getline(ss,temp,',')){
        arr.push_back(stoi(temp));
    }

    sortFrequency(arr);

    return 0;
}