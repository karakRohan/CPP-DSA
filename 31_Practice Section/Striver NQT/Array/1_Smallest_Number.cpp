#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    // Remove { } and ,
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '{' || s[i] == '}' || s[i] == ',')
        {
            s[i] = ' ';
        }
    }
    vector<int> arr;
    stringstream ss(s);
    int x;
    while(ss >> x)
    {
        arr.push_back(x);
    }
    int smallest = INT_MAX;
    for(int i = 0; i < arr.size(); i++)
    {
        smallest = min(smallest, arr[i]);
    }
    cout << smallest;
    return 0;
}