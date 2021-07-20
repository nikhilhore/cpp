#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N,Q;
    cin >> N >> Q;
    string arr[N];
    string que[Q];
    for (int i=0; i<N; ++i){
        getline(cin, arr[i]);
    }
    for (int i=0; i<Q; ++i){
        getline(cin, que[i]);
    }
    return 0;
}
