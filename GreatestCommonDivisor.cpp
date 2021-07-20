#include <bits/stdc++.h>
using namespace std;

int greatestCommonDivisor(int n, int m){
    if (n==0 || m==0) return max(n,m);
    if (n>m) return greatestCommonDivisor(n%m, m);
    else return greatestCommonDivisor(n, m%n);
}

int main(){
    int n, m;
    cin >> n >> m;
    cout << greatestCommonDivisor(n, m);
    return 0;
}