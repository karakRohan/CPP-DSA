#include<bits/stdc++.h>
using namespace std;

vector<vector<char>> grid;
vector<vector<string>> result; // to store the final result

bool canPlaceQueen(int row, int col, int n){
    // column check
    for(int i = row-1; i>= 0; i--){
        if(grid[i][col] == 'Q') return false; // we are attacked
    }
    // left diagonal check
    for(int i = row-1, j = col-1; i>=0 && j>=0; i--, j--){
        if(grid[i][j] == 'Q') return false; // we are attacked
    }
    // right diagonal check
    for(int i = row-1, j = col+1; i>=0 && j<n; i--, j++){
        if(grid[i][j] == 'Q') return false; // we are attacked
    }
    return true;  // no attack found
}


// backtracking function to place n queens in the grid
void f(int row, int n){
    // base case
    if(row == n){
        vector<string> temp;
        // we got one possible ans
        // print the grid (grid display code)
        for(int i=0; i<n; i++){
            string res = "";
            for(int j=0; j<n; j++){
                res += grid[i][j];
            }
            temp.push_back(res);
        }
        result.push_back(temp);
        return;
    }
    for(int col=0; col<n; col++){
        if(canPlaceQueen(row, col, n)){
            grid[row][col] = 'Q';
            f(row+1, n);
            grid[row][col] = '.'; // backtracking step
        }
    }
}


vector<vector<string>> nqueens(int n) {
    grid.clear();
    result.clear();
    grid.resize(n, vector<char>(n, '.')); // initialize the grid with '.'
    f(0, n); // start placing queens from the first row
    return result;
}


int main(){
    int n;
    cin >> n;
    grid.resize(n, vector<char>(n, '.')); // initialize the grid with '.'
    f(0, n); // start placing queens from the first row
    return 0;
}