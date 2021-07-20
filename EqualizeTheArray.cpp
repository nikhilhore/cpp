#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	for (int i=0; i<n; ++i){
		cin >> arr[i];
	}
	int newarr[n];
	for (int j=0; j<n; ++j){
		newarr[j]=count(arr, arr + n, arr[j]);
	}
	int max=0;
	for (int k=0; k<n; ++k){
		if (newarr[k]>max) max=newarr[k];
	}
	cout << n - max;
	return 0;
}