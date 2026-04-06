#include <bits/stdc++.h>
using namespace std;


#define ll long long int

ll n, m; //  dimensions of the input matrix
char mat[105][105]; //  input matrix // mat = Matrix
ll dp[105][105][105];

ll f(ll i, ll j, ll x, ll y){

    if(i > n or j > m or x > n or y > m or mat[i][j] == '#' or mat[x][y] == '#') return 0;
    if(i == n and j == m){ // is the tourist 1 already at n , m (i+j) == (n+m)
        return mat[i][j] == '*';
    }
    if(dp[i][j][x] != -1) return dp[i][j][x]; 
    ll result = INT_MIN;

    result = max(result, f(i + 1, j, x + 1, y));
    result = max(result, f(i + 1, j, x, y + 1));
    result = max(result, f(i, j + 1, x + 1, y));
    result = max(result, f(i, j + 1, x, y + 1));

    result += (mat[i][j] == '*');
    result += (mat[x][y] == '*');


    // remove Repition
    if(i == x and j == y and mat[i][j] == '*') result--;

    return dp[i][j][x] = result;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> m >> n;
        memset(dp, -1, sizeof(dp));
        for(ll i = 1; i <= n; i++){
            for(ll j = 1; j <= m; j++){
                cin >> mat[i][j];
            }
        }
        
        cout << f(1, 1, 1, 1) << endl;
    }
    return 0;
}



//Input:
// 2
// 9 7
// *........
// .....**#.
// ..**...#*
// ..####*#.
// .*.#*.*#.
// ...#**...
// *........
// 5 5
// .*.*.
// *###.
// *.*.*
// .###*
// .*.*.

// Output:
// 7
// 8 