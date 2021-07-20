#include <bits/stdc++.h>
using namespace std;
int main(void){
    string s;
    cin >> s;
    int cnt=1;
    int n= s.length();
    sort(s.begin(), s.end());
    for (int i=1; i<n; ++i){
        if (s[i]==s[i-1]) continue;
        cnt++;
    }
    if (cnt%2==0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0;
}