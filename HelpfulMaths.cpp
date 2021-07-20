#include <bits/stdc++.h>
using namespace std;
int main(void){
    string s;
    cin >> s;
    int n= s.length();
    vector <char> ns;
    for (int i=0; i<n; i+=2){
        ns.push_back(s[i]);
    }
    sort(ns.begin(), ns.end());
    for (int i=0; i<(n/2); ++i){
        cout << ns[i] << '+';
    }
    cout << ns[n/2];
    return 0;
}