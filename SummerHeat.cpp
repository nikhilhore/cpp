#include <bits/stdc++.h>
using namespace std;
int main(void){
    int t;
    cin >> t;
    for (int i=0; i<t; ++i){
        int xa,xb,ya,yb;
        cin >> xa >> xb >> ya >> yb;
        int cnt=0;
        if (ya%xa==0) cnt+=ya/xa;
        else cnt+=ya/xa+1;
        if (yb%xb==0) cnt+=yb/xb;
        else cnt+=ya/xa+1;
        cout << cnt << endl;
    }
    return 0;
}