#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i=0; i<n; ++i){
        cin >> a[i];
    }
    int t[n];
    for (int i=0; i<n; ++i){
        cin >> t[i];
    }
    int sum=0;
    for (int i=0; i<n; ++i){
        sum+=a[i]*t[i];
    }
    int newsum=0, maxsum=0;
    for (int i=0; i<k; ++i){
        if (t[i]==0) newsum+=a[i];
    }
    maxsum= newsum;
    for (int i=k; i<n; ++i){
        if (t[i-k]==0) newsum-= a[i-k];
        if (t[i]==0) newsum+=a[i];
        if (newsum>maxsum) maxsum= newsum;
    }
    sum+=maxsum;
    cout << sum;
    return 0;
}