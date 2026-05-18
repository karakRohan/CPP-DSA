#include<bits/stdc++.h>
using namespace std;

void addElement(vector<int>& arr, int beginElement, int endElement, int posElement, int pos)
{
    // Insert at beginning
    arr.insert(arr.begin(), beginElement);

    // Insert at specific position
    arr.insert(arr.begin() + (pos-1), posElement); // pos = position

    // Insert at end
    arr.push_back(endElement);

    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];

        if(i != arr.size()-1)
        {
            cout << ",";
        }
    }
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

    int beginElement, endElement, posElement, pos;

    cin >> beginElement >> endElement >> posElement >> pos;

    addElement(arr, beginElement, endElement, posElement, pos);

    return 0;
}