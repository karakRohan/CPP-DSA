#include<bits/stdc++.h>
using namespace std;

void replaceRank(vector<int>& arr)
{
    vector<int> temp = arr;

    sort(temp.begin(), temp.end());

    for(int i = 0; i < arr.size(); i++)
    {
        cout << lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin() + 1 << " ";
    }
}

int main(){

    string s;
    getline(cin,s);

    stringstream ss(s);
    string temp;
    vector<int> arr;

    while(getline(ss,temp,' ')){

        if(temp != "")
        {
            arr.push_back(stoi(temp));
        }
    }

    replaceRank(arr);

    return 0;
}