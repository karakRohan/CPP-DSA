#include<bits/stdc++.h>
using namespace std;

void maxProduct(vector<int>& arr)
{
    int maxi = INT_MIN;

    for(int i = 0; i < arr.size(); i++)
    {
        int product = 1;

        for(int j = i; j < arr.size(); j++)
        {
            product *= arr[j];

            maxi = max(maxi, product);
        }
    }

    cout << maxi;
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

    maxProduct(arr);

    return 0;
}