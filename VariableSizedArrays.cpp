#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q;
    cin >> n >> q;
    int ** arr;
    arr= new int*[n];
    for (int i=0; i<n; ++i){
        int a;
        cin >> a;
        arr[i]= new int[a];
        for(int j=0; j<a; ++j){
            cin >> arr[i][j];
        }
    }
    int ** que;
    que=new int*[q];
    for(int k=0; k<q; ++k){
        que[k]=new int[2];
        for(int l=0; l<2; ++l){
            cin >> que[k][l];
        }
    }
    for (int m=0; m<q; ++m){
        cout << (arr[que[m][0]][que[m][1]]) << endl;
    }
    return 0;
}