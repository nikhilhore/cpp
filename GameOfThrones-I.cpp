#include <bits/stdc++.h>
using namespace std;

string gameOfThrones(string s) {
    int n= s.length();
    string x= "abcdefghijklmnopqrstuvwxyz";
    int cnt=0;
    for (int i=0; i<26; ++i){
        int c= count(s.begin(), s.end(), x[i]);
        if (c%2==1) cnt++;
    }
    if (cnt>1) return "NO";
    return "YES";
}

int main(void){
    string s;
    cin >> s;
    string n= gameOfThrones(s);
    cout << n;
    return 0;
}