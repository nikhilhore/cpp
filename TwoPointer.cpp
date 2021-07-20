#include <bits/stdc++.h>
using namespace std;

struct Pair{
    int a;
    int b;
};

struct Pair twopointer(vector <int> a, int sum){
    struct Pair ab;
    int n= a.size();
    int i=0, j=n-1;
    while (i<n && j>=0){
        if (a[i]+a[j]==sum){
            ab.a= a[i];
            ab.b= a[j];
            return ab;
        }
        else if (a[i]+a[j]>sum) {
            j--;
        }
        else {
            i++;
        }
    }
    return ab;
}

int main(void){
    struct Pair ab;
    int n, sum, temp;
    cin >> n >> sum;
    vector <int> a;
    for (int i=0; i<n; ++i){
        cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    ab= twopointer(a, sum);
    cout << ab.a << ' ' << ab.b;
    return 0;
}