#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> &p1, pair<int, int> &p2){ // cmp = compare function (custom comparator)
    // pair<int, int> first = value, second = weight
    double r1 = (p1.first*1.0)/(p1.second*1.0); // ratio = value/weight
    double r2 = (p2.first*1.0)/(p2.second*1.0); // ratio = value/weight
    return r1 > r2; // sort in decreasing order of ratio
}

double fractionalknapsack(vector<int> &profit, vector<int> &weights, int n, int w){
    /**
     * Time Complexity: O(nlogn) + O(n) = O(nlogn)
     * Space Complexity: (Sorting Algorithm) O(n) + O(n) = O(n)
     */
    vector<pair<int, int>> arr;
    for(int i = 0; i<n; i++){
        arr.push_back({profit[i], weights[i]}); // O(n)
    }
    sort(arr.begin(), arr.end(), cmp); // O(nlogn)
    double result = 0;
    for(int i = 0; i<n; i++){
        if(arr[i].second <= w){
            result += arr[i].first;
            w -= arr[i].second;
        }
        else{
            result +=((arr[i].first*1.0) / (arr[i].second*1.0))*w; // add the fraction of the item
            w = 0;
            break;
        }

    }
    return result;
}

int main(){
    vector<int> profit = {60, 100, 120};     
    vector<int> weights = {10, 20, 30};
    int w = 50;
    int n = profit.size();
    cout << fractionalknapsack(profit, weights, n, w) << endl; // O(nlogn)   
    return 0;
}