#include <bits/stdc++.h>
using namespace std;
int maximumToys(int a[], int n, int k){
	int m, sum=0;
	for (int i=0; i<n; ++i){
		sum+=a[i];
		if (sum>=k){
			m=i;
			break;
		}
	}
	return m;
}

int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i=0; i<n; ++i){
		cin >> a[i];
	}
	sort(a,a+n);
	cout << maximumToys(a, n, k);
	return 0;
}