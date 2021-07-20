#include <bits/stdc++.h>
using namespace std;

int cookies(int k, vector<int> A) {
    int n= A.size();
    priority_queue<int, vector<int>, greater<int>> q;
    for (int i=0; i<n; ++i){
        q.push(A[i]);
    }
    int cnt=0;
    while(q.top()<k){
        if (q.size()<2) return -1;
        int b=0;
        b+= q.top();
        q.pop();
        b+= 2*q.top();
        q.pop();
        q.push(b);
        cnt++;
    }
    return cnt;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector <int> A(n);
    for (int i=0; i<n; ++i){
        cin >> A[i];
    }
    cout << cookies(k, A);
    return 0;
}