#include <bits/stdc++.h>
using namespace std;

int isBadPrice(int a[], int n){
	int cnt=0;
	int max= a[n-1];
	for(int i=n-2; i>=0; i--){
        if (max<a[i]) cnt++;
        else max= a[i];
    }
	return cnt;
}

int main(){
	int t=0;
	cin >> t;
	while(t--){
		int n=0;
		cin >> n;
		int a[n];
		for (int i=0; i<n; ++i){
			cin >> a[i];
		}
		cout << isBadPrice(a, n) << endl;
	}
	return 0;
}