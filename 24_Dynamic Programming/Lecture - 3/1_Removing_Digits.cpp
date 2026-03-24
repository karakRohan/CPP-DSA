// Question : https://cses.fi/problemset/task/1637
// Removing Digits(https://cses.fi/problemset/task/1637)


#include<bits/stdc++.h>
using namespace std;

vector<int> get_digits(int n){
    vector<int> result;
    while(n > 0){
        if(n%10 != 0){
            // n % is the last digit of n
            result.push_back(n%10);
        }
        n = n/10;
    }
    return result;
}

vector<int> dp;

int f(int n){
    if(n==0) return 0;
    if(n<= 9) return 1;
    if(dp[n] != -1) return dp[n];

    vector<int> digits = get_digits(n);

    int result = INT_MAX;
    for(int i = 0; i < digits.size(); i++){
        result = min(result, f(n - digits[i]));
    }
    return dp[n] = 1 + result;
}

int fbu(int num){ // bottom up approach
    dp[0] = 0;
    for(int i = 1; i <= 9; i++) dp[i] = 1;
    for(int n = 10; n<= num; n++){
        // n -> state
        // calculate dp[n]
        vector<int> digits = get_digits(n);
        int result = INT_MAX;
        for(int i = 0; i < digits.size(); i++){
            result = min(result, dp[n-digits[i]]);

        }
        dp[n] = 1 + result;
    }
    return dp[num];
}

int main(){
    int n;
    cin >> n;
    dp.resize(1000005, -1);
    cout << f(n) << endl;
    cout << fbu(n) << endl;
    return 0;

}


// Method 2 : Tabulation // Bottom Up Approach

// #include<bits/stdc++.h>
// using namespace std;

// vector<int> get_digits(int n){
//     vector<int> result;
//     while(n > 0){
//         if(n % 10 != 0){
//             result.push_back(n % 10);
//         }
//         n /= 10;
//     }
//     return result;
// }

// int main(){
//     int n;
//     cin >> n;

//     vector<int> dp(n + 1, INT_MAX);
//     dp[0] = 0;

//     for(int i = 1; i <= n; i++){
//         vector<int> digits = get_digits(i);

//         for(int d : digits){
//             dp[i] = min(dp[i], 1 + dp[i - d]);
//         }
//     }

//     cout << dp[n] << endl;
//     return 0;
// }