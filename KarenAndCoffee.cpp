#include <bits/stdc++.h>
using namespace std;

const int N=200005;
int b[N];

int main(){
    int n, k, q, l, r;
    cin >> n >> k >> q;
    for (int i=0; i<n; ++i){
        cin >> l >> r;
        b[l]++;
        b[r+1]--;
    }
    int sum=0, cnt=0;
    for (int i=0; i<N; ++i){
        sum+= b[i];
        if (sum>=k) cnt++;
        b[i]= cnt;
    }
    for (int i=0; i<q; ++i){
        cin >> l >> r;
        cout << b[r]- b[l-1] << endl;
    }
    return 0;
}