#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    string s = "physicswallah";
    string t = "phywallahics";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    cout<<s<<endl;
    cout<<t<<endl;
    if(s==t) cout<<true;
    else cout<<false;
}

// leet Code 242

/*class solution {
    public:
    
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t) return true;
        else return false;
    }
};*/