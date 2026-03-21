#include<bits/stdc++.h>
using namespace std;

#define inf INT_MAX  // infinity

// Function to find minimum steps to reduce n to 1
int f(int n){
    if(n == 1) return 0;
    if(n == 2 || n == 3) return 1;

    return 1 + min(f(n-1),
                  min((n%2 == 0 ? f(n/2) : inf),
                      (n%3 == 0 ? f(n/3) : inf)));
}


vector<int> dp; // dp array for memoization

int ftd(int i){ // ftd = function top down
    // T.C. = O(n)
    // S.C. = O(n)
    if(i == 1) return 0;
    if(i == 2 || i == 3) return 1;
    if(dp[i] != -1) return dp[i]; // ith state is computed
    // if dp[i] is -1, we need to compute first time this state

    return dp[i] = 1 + min(ftd(i-1),
                  min((i%2 == 0 ? ftd(i/2) : inf),
                      (i%3 == 0 ? ftd(i/3) : inf)));
}

int fbu(int n){ // fub = function bottom up
    // T.C. = O(n)
    // S.C. = O(n)
    dp.clear();
    dp.resize(n+1, inf); // initialize dp array with infinity
    dp[1] = 0; // base case
    dp[2] = dp[3] = 1; // base case
    for(int i=4; i<=n; i++){ // order of filling dp array
        dp[i] = 1 + min(dp[i-1],
                  min((i%2 == 0 ? dp[i/2] : inf),
                      (i%3 == 0 ? dp[i/3] : inf)));
    }
    return dp[n];

}

int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    dp.clear();
    dp.resize(1005, -1); // initialize dp array with -1

    // int ans = f(n);
    int ans = ftd(n);
    int ans2 = fbu(n);


    cout << "Minimum steps to reach 1 top-down: " << ans << endl;
    cout << "Minimum steps (Bottom-Up): " << ans2 << endl;

    return 0;
}