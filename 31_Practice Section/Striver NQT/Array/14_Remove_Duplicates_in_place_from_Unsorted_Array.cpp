#include<bits/stdc++.h>
using namespace std;

void removeDuplicate(vector<int>& arr)
{
    set<int> st;
    vector<int> ans;

    for(int i = 0; i < arr.size(); i++)
    {
        if(st.find(arr[i]) == st.end())
        {
            st.insert(arr[i]);
            ans.push_back(arr[i]);
        }
    }

    cout << "{";

    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];

        if(i != ans.size()-1)
        {
            cout << ",";
        }
    }

    cout << "}";
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
        int num = stoi(temp);
        arr.push_back(num);
    }

    removeDuplicate(arr);

    return 0;
}