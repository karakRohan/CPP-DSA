#include<bits/stdc++.h>
using namespace std;

void FindMedian(vector<int>& arr)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    //Odd Size
    if(n%2 != 0){
        cout<< arr[n/2];
    }
    //Even Size
    else{
        double median = (arr[n/2] + arr[n/2 - 1]) / 2.0;
        cout << median;
    }
}

int main(){
    string s;
    getline(cin,s);
    if(s.front()=='[' && s.back()== ']'){
        s = s.substr(1,s.length() - 2);
    }
    stringstream ss(s);
    string temp;
    vector<int> arr;
    while(getline(ss, temp, ',' )){
        int num = stoi(temp);
        arr.push_back(num);
    }
    // Function Call
    FindMedian(arr);
    return 0;
        
}