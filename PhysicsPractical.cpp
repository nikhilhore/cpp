#include<bits/stdc++.h>
using namespace std;

int main(){

    ifstream cin("input.txt");
    ofstream cout("output.txt");
    
    int n;
    cin >> n;
    int c[n];
    for(int i=0; i<n; ++i){
        cin>>c[i];
    }
    sort(c,c+n);
    int maxi= -1;
    for(int i=0; i<n; ++i){
        int l=0, r=n;
        int m;
        while(l<r){
            m= l+(r-l)/2;
            if(2*c[i]>=c[m])  l=m+1;
            else r=m;
        }
        if(l-i>maxi)  maxi= l-i;
    }
    cout << n-maxi << endl;
    return 0;
}