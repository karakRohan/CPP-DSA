#include<bits/stdc++.h>
using namespace std;

void removeDuplicate(vector<int>& arr)
{
    auto it = unique(arr.begin(), arr.end());
    int k = it - arr.begin();
    cout << "[";
    for(int i = 0; i < arr.size(); i++)
    {
        if(i < k)
        {
            cout << arr[i];
        }
        else
        {
            cout << "_";
        }

        if(i != arr.size()-1)
        {
            cout << ",";
        }
    }

    cout << "]";
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
        int num = stoi(temp);
        arr.push_back(num);
    }
    removeDuplicate(arr);
    return 0;
}