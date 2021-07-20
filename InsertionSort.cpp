#include <bits/stdc++.h>
using namespace std;

/* In this alogorithm we iterate through the numbers after ith position and then 
 get the first number lesser than number at ith position and then slide all the
 numbers greater than the first lesser number to the right and put the first lesser
 number at missing spot. */

void insertionSort(int arr[], int n){
	int i, j, key;
    for (i = 0; i < n-1; i++){
        key = arr[i+1];
        for (j=i; j>=0; j--){
        	if (arr[j]<=key) break;
        	arr[j+1]=arr[j];
        }
        arr[j + 1] = key;
    }
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for (int i=0; i<n; ++i){
		cin >> arr[i];
	}
	insertionSort(arr, n);
	for (int i=0; i<n; ++i){
		cout << arr[i] << ' ';
	}
	return 0;
}