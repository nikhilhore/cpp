#include <iostream>
using namespace std;
int main() {
int N, a, b, sum=0;
cin >> N;
int arr[N];
    for (int i=0; i<N; i+=1) {
        cin >> a;
        arr[i]=a;
    }
    if (N%2!=0) cout << "still running";
    else {
    for (int j=0; j<N; j+=1) {
        if (j%2==0) continue;
        sum+=(arr[j]-arr[j-1]);
    }
    cout << sum;}
return 0;}
