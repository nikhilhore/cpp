#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[], int n){
    for (int i=0; i<n; ++i) cout << arr[i] << ' ';
}

void deleteElement(int arr[], int n, int k){
	for (int i=k; i<n; ++i){
		arr[i]=arr[i+1];
	}
}

int main(void){
	int n, k;
	cin >> n >> k;
	int arr[n];
	for (int i=0; i<n; ++i){
		cin >> arr[i];
	}
	deleteElement(arr, n, k);
	printarray(arr, n-1);
	return 0;
}