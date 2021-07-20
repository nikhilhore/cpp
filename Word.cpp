#include <bits/stdc++.h>
using namespace std;
int main(void){
    string s;
    cin >> s;
    int n= s.length();
    int cnt=0;
    for (int i=0; i<n; ++i){
        if (s[i]<97) cnt++;
    }
    if (cnt>n-cnt){
        for (int i=0; i<n; ++i){
            if (s[i]>=97) s[i]-=32;
        }
    }
    else {
        for (int i=0; i<n; ++i){
            if (s[i]<97) s[i]+=32;
        }
    }
    cout << s;
    return 0;
}