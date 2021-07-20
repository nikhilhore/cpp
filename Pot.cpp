#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
    int N,X=0,a,b,d;
    string c,e;
    cin >> N;
    for (int i=0; i<N; i+=1) {
        cin >> a;
        b=a/10;
        e=to_string(a);
        c=e.back();
        d=stoi(c);
        X+=pow(b, d);
    }
    cout << X;
return 0;}
