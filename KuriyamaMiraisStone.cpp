#include<bits/stdc++.h>
using namespace std;

const int N= 100005;
long long a[N];
long long b[N];

int main(){
    int n;
    cin >> n;
    long long v[n];
    long long u[n];
    for (int i=0; i<n; ++i){
        cin >> v[i];
        u[i]= v[i];
    }
    sort(u, u+n);

    for (int i=0; i<n; ++i){
        a[i+1]= v[i];
        b[i+1]= u[i];
    }
    for (int i=1; i<=n; ++i){
        a[i]+=a[i-1];
        b[i]+=b[i-1];
    }

    int m;
    cin >> m;
    int type, l, r;
    for (int i=0; i<m; ++i){
        cin >> type >> l >> r;
        if (type==1){
            cout << a[r]-a[l-1] << endl;
        }
        else {
            cout << b[r]-b[l-1] << endl;
        }
    }
    return 0;
}