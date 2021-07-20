#include <bits/stdc++.h>
using namespace std;
int findMedian(int arr[], int n){
	sort(arr, arr+n);
	int m= arr[n/2];
	return m;
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; ++i){
		cin >> arr[i];
	}
	int m= findMedian(arr, n);
	cout << m;
	return 0;
}