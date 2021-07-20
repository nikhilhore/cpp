#include <bits/stdc++.h>
using namespace std;

int maxarr(int a[], int n){
    int ans=0;
    int j=0;
    for (int i=0; i<n; ++i){
        while (j < n && a[j] - a[i] <= 5) {
            ++j;
            ans = max(ans, j - i);
        }
    }
    return ans;
}

int main(void){
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; ++i){
        cin >> a[i];
    }
    sort(a, a+n);
    cout << maxarr(a, n);
    return 0;
}