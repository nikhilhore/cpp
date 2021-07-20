#include <bits/stdc++.h>
using namespace std;

const int N= 100005;
long long b[N];
long long c[N];

struct Operations{
    int l, r, d;
};

int main(void){
    int n, m, k, x, y;
    cin >> n >> m >> k;
    int a[n];

    for (int i=0; i<n; ++i){
        cin >> a[i];
    }

    struct Operations ops;
    vector <struct Operations> opers(m);
    for (int i=0; i<m; ++i){
        cin >> ops.l >> ops.r >> ops.d;
        opers[i]=ops;
    }

    for (int i=0; i<k; ++i) {
        cin >> x >> y;
        b[x]++;
        b[y+1]--;
    }

    int cnt=0;
    for (int i=1; i<=m; ++i){
        cnt+= b[i];
        b[i]= cnt;
    }

    for (int i=0; i<m; ++i){
        c[opers[i].l]+=opers[i].d*b[i+1];
        c[opers[i].r+1]-=opers[i].d*b[i+1];
    }

    for (int i=1; i<=n; ++i){
        c[i]+=c[i-1];
    }

    for (int i=1; i<=n; ++i){
        cout << a[i-1]+c[i] << ' ';
    }

    return 0;
}