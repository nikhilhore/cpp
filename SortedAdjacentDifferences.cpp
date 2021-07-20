#include <bits/stdc++.h>
using namespace std;

int main(void){
    int t;
    cin >> t;
    for (int k=0; k<t; ++k){
        int n;
        cin >> n;
        int a[n];
        for (int i=0; i<n; ++i){
            cin >> a[i];
        }
        sort(a,a+n);
        int b=n/2;
        vector <int> c;
        if (n%2!=0){
            c.push_back(a[n/2]);
        }
        for (int i=n/2-1; i>=0; --i){
            c.push_back(a[i]);
            c.push_back(a[n-1-i]);
        }
        for (int i=0; i<n; ++i){
            cout << c[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}