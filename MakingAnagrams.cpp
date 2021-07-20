#include <bits/stdc++.h>
using namespace std;

int makingAnagrams(string s1, string s2) {
    int l1= s1.length();
    int l2= s2.length();
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    string s= "abcdefghijklmnopqrstuvwxyz";
    int l= s.length();
    int n=0;
    for (int i=0; i<l; ++i){
        int c1= count(s1.begin(), s1.end(), s[i]);
        int c2= count(s2.begin(), s2.end(), s[i]);
        n+=abs(c1-c2);
    }
    return n;
}

int main(void){
    string s1, s2;
    cin >> s1 >> s2;
    int n= makingAnagrams(s1, s2);
    cout << n;
    return 0;
}