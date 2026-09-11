#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "raghav is a math teacher. He is a DSA mentor as well";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp);
    {
        v.push_back(temp);
    }
    
    sort(v.begin(),v.end());
    int MaxCount = 1;
    int count = 1;
    for(int i=1;i<v.size();i++)
    {
        if(v[i]==v[i-1]) count++;
        else count = 1;
        MaxCount =max(MaxCount,count);
    }
    
    count = 1;
    for(int i=1;i<v.size();i++)
    {
        if(v[i]==v[i-1]) count++;
        else count = 1;
        if(count==MaxCount)
        {
            cout<<v[i]<<" = "<<MaxCount<<endl;
        }
    }
}
