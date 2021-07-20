#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int cnt=0;
        string s;
        cin >> s;
        int f=0, l=0;
        int n= s.size();
        for (int i=0; i<n; ++i){
            if (s[i]=='1'){
                f= i;
                break;
            }
        }
        for (int i=n-1; i>=f; --i){
            if (s[i]=='1'){
                l= i;
                break;
            }
        }
        for (int i=f; i<l; ++i){
            if (s[i]=='0') cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}