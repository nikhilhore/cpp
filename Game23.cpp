#include <bits/stdc++.h>
using namespace std;

int counting(int n, int m){
    if (m%n!=0) return -1;
    int a= m/n;
    int cnt=0;
    while(a%2==0){
        a/=2;
        cnt++;
    }
    while(a%3==0){
        a/=3;
        cnt++;
    }
    if (a==1) return cnt;
    return -1;
}

int main(void){
    int n, m;
    cin >> n >> m;
    cout << counting(n, m);
    return 0;
}