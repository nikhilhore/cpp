#include <bits/stdc++.h>
using namespace std;
int main(void){
    string s;
    cin >> s;
    int n= s.length();
    if (n<5){
        cout << "NO";
        return 0;
    }
    string h= "hello";
    int x=0;
    for (int i=0; i<5; ++i){
        for (int j=x; j<n; ++j){
            if (h[i]==s[j]){
                x=j+1;
                break;
            }
            if (j==n-1){
                cout << "NO";
                return 0;
            }
        }
    }
    char ss[n-1];
    for (int i=0; i<n-1; ++i){
        ss[i]=s[i];
    }
    int sss= sizeof(ss)/sizeof(ss[0]);
    int c= count(ss, ss+n-1, 'l');
    if (c<2){
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}