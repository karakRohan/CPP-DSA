// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++) cin >> arr[i];
//     int smallest = arr[0];
//     for(int i = 1; i < n; i++)
//     {
//         if(arr[i] < smallest)smallest = arr[i];
//     }
//     cout << smallest;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int sortArr(vector<int>& arr) {
//     sort(arr.begin(), arr.end());
//     return arr[0];
// }
// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i = 0; i < n; i++) cin >> arr[i];
//     cout << "The smallest element in the array is: "<< sortArr(arr);
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int sortArr(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    return arr[0];
}
int main() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> arr;
    int num;
    while(ss >> num)arr.push_back(num);
    cout << "The smallest element in the array is: "<< sortArr(arr);
    return 0;
}