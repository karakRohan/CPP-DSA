#include<bits/stdc++.h>
using namespace std;

void leftRotate(vector<int>& arr, int k)
{
    rotate(arr.begin(), arr.begin()+k, arr.end());

    cout << "Left Rotation : {";

    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];

        if(i != arr.size()-1)
        {
            cout << ", ";
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

    int k;
    cin >> k;

    leftRotate(arr,k);

    return 0;
}