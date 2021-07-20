#include <bits/stdc++.h>
using namespace std;

// long long cnt=0;

void towerOfHanoi(int n, char l, char m, char r){
    if (n>0){
        towerOfHanoi(n-1, l, r, m);
        cout << l << " to " << r << endl;
        // cnt++;
        towerOfHanoi(n-1, m, l, r);
    }
}

int main(){
    int n;
    cin >> n;
    char l='A', m='B', r='C';
    towerOfHanoi(n, l, m, r);
    // cout << cnt;
    return 0;
}