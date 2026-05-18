#include<bits/stdc++.h>
using namespace std;

void repeatingElement(vector<int>& arr)
{
    sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size()-1; i++)
    {
        if(arr[i] == arr[i+1])
        {
            cout << arr[i] << " ";
        }
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

    while(getline(ss,temp,',')){
        int num = stoi(temp);
        arr.push_back(num);
    }

    repeatingElement(arr);

    return 0;
}