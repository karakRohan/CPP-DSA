// #include<bits/stdc++.h>
// using namespace std;

// void rotateArray(vector<int>& arr, int k, string dir)
// {
//     if(dir == "left")
//     {
//         rotate(arr.begin(), arr.begin()+k, arr.end());
//     }
//     else
//     {
//         rotate(arr.rbegin(), arr.rbegin()+k, arr.rend());
//     }

//     for(int x : arr)
//     {
//         cout << x << " ";
//     }
// }

// int main(){

//     string s;
//     getline(cin,s);

//     if(s.front()=='[' && s.back()==']'){
//         s = s.substr(1,s.length()-2);
//     }

//     stringstream ss(s);
//     string temp;
//     vector<int> arr;

//     while(getline(ss,temp,',')){
//         arr.push_back(stoi(temp));
//     }

//     int k;
//     cin >> k;

//     string dir;
//     cin >> dir;

//     rotateArray(arr,k,dir);

//     return 0;
// }






#include<bits/stdc++.h>
using namespace std;

void rotateArray(vector<int>& arr, int k, string dir)
{
    if(dir == "left")
    {
        rotate(arr.begin(), arr.begin()+k, arr.end());
    }
    else
    {
        rotate(arr.rbegin(), arr.rbegin()+k, arr.rend());
    }

    cout << "[";

    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];

        if(i != arr.size()-1)
        {
            cout << ", ";
        }
    }

    cout << "]";
}

int main(){

    string s;
    getline(cin,s);

    if(s.front()=='[' && s.back()==']'){
        s = s.substr(1,s.length()-2);
    }

    stringstream ss(s);
    string temp;
    vector<int> arr;

    while(getline(ss,temp,',')){
        arr.push_back(stoi(temp));
    }

    int k;
    cin >> k;

    string dir;
    cin >> dir;

    rotateArray(arr,k,dir);

    return 0;
}