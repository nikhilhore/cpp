#include <bits/stdc++.h>
using namespace std;

long long books(long long a[], long long n, long long t){
    long long total=0, min=999999;
    for (long long i=0; i<n; ++i){
        if (a[i]<min) min= a[i];
        total+= a[i];
    }
    if (t<min) return 0;
    if (t==min) return 1;
    if (t>=total) return n;

    long long sum=0; long long j=0;
    for (long long i=0; i<n; ++i){
        if (sum+a[i]<=t){
            sum+= a[i];
            j= i;
        }
        else break;
    }
    long long cnt= j+1, max= cnt;
    for (long long i=0; i<n; ++i){
        while(sum-a[i]+a[j+1]<=t){
            sum+= a[j+1];
            j= j+1;
            cnt= j-i;
        }
        sum-=a[i];
        if (cnt>max) max= cnt;
    }
    return max;
}

int main(){
    long long n, t;
    cin >> n >> t;
    long long a[n];
    for (long long i=0; i<n; ++i){
        cin >> a[i];
    }
    long long max= books(a, n, t);
    cout << max;
    return 0;
}