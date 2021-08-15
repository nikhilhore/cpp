#include <iostream>
using namespace std;

// Top-down approach
int numofways1(int r, int c){
    if (r==0 || c==0) return 0;
    if (r==1 || c==1) return 1;
    return numofways1(r-1, c)+numofways1(r, c-1);
}

// Memoization
long long memogrid[31][31];
long numofways2(int r, int c){
    if (memogrid[r][c]) return memogrid[r][c];
    if (r==0 || c==0) return 0;
    if (r==1 || c==1) return 1;
    memogrid[r][c]= numofways2(r-1, c)+numofways2(r, c-1);
    memogrid[c][r]= memogrid[r][c]; // Since both conditions have same number of ways
    return memogrid[r][c];
}

// Bottom-Up approach (Tabulation)
long numofways3(int r, int c){
    if (r==0 || c==0) return 0;
    if (r==1 || c==1) return 1;
    long long grid[r][c];
    for (int i=0; i<r; ++i){
        grid[i][0]= 1;
    }
    for (int i=0; i<c; ++i){
        grid[0][i]= 1;
    }
    for (int i=1; i<r; ++i){
        for (int j=1; j<c; ++j){
            grid[i][j]= grid[i-1][j]+grid[i][j-1];
        }
    }
    return grid[r-1][c-1];
}

int main(){
    int r, c;
    cin >> r >> c;
    // int n1= numofways1(r, c); // slow
    // long n2= numofways2(r, c); // fast
    long n3= numofways3(r, c); // faster
    // cout << n1 << endl;
    // cout << n2 << endl;
    cout << n3 << endl;
    return 0;
}