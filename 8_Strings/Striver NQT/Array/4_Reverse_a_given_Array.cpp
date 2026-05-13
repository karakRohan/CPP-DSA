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

    // Reverse array
    reverse(arr.begin(), arr.end());

    // Print reversed array
    cout << "{";

    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];

        if(i != arr.size() - 1)
        {
            cout << ",";
        }
    }

    cout << "}";

    return 0;
}