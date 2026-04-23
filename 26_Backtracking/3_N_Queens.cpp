#include<bits/stdc++.h>
using namespace std;

vector<vector<char>> grid;

bool canPlaceQueen(int row, int col, int n){
    // column check
    
}


// backtracking function to place n queens in the grid
void f(int row, int n){
    // base case
    if(row == n){
        // we got one possible ans
        // print the grid (grid display code)
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << grid[i][j];
            }
            cout << endl;
        }
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