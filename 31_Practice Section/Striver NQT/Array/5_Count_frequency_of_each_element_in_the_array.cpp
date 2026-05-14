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

    // Store integers into vector
    while(ss >> x)
    {
        arr.push_back(x);
    }

    map<int,int> freq;

    // Count frequency
    for(int i = 0; i < arr.size(); i++)
    {
        freq[arr[i]]++;
    }

    // Print frequency
    for(auto it : freq)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}