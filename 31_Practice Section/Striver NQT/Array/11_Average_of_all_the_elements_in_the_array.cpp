#include<bits/stdc++.h>
using namespace std;

void findAverage(vector<int>& arr)
{
    int sum = accumulate(arr.begin(), arr.end(), 0);

    double avg = (double)sum / arr.size();

    cout << avg;
}

int main(){

    string s;
    getline(cin,s);

    if(s.front()=='{' && s.back()=='}'){
        s = s.substr(1,s.length()-2);
    }

    stringstream ss(s);
    string temp;
    vector<int> arr;

    while(getline(ss,temp,',')){
        int num = stoi(temp);
        arr.push_back(num);
    }

    findAverage(arr);

    return 0;
}