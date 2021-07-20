#include <bits/stdc++.h>
using namespace std;
int main(void){
    string s;
    cin >> s;
    int n= s.length();
    int i;
    for (i=0; i<n; ++i){
        if (s[i]==s[i+1]){
            s.erase(i,2);
            n-=2;
            i=-1;
        }
    }
    if (s.length()==0) s= "Empty String";
    cout << s;
    return 0;
}