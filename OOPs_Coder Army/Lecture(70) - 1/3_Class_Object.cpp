#include<bits/stdc++.h>
using namespace std;

class a{
    char c; // padding char will increase the size of the class to 12 bytes
    int b;
    // int c;
    // int d;
    double d; 
};

int main(){
    a obj;
    cout<<sizeof(obj)<<endl; // 12 bytes (assuming int is 4 bytes)
    return 0;
} 