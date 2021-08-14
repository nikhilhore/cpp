#include <bits/stdc++.h>
using namespace std;

string dectobin(int n){
    string binary="";
    while (n){
        binary+= to_string(n%2);
        n/= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

int main(){
    int n;
    cin >> n;
    cout << dectobin(n);
    return 0;
}