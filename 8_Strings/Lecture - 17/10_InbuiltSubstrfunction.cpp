#include<bits/stdc++.h>
// #include<iostream>
// #include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a String : ";
    cin>>str; 
    // abcdefgh   -> n=8
    int n = str.length(); 
    cout<<str.substr(n/2);
}

// input : abcdefgh
// output : efgh