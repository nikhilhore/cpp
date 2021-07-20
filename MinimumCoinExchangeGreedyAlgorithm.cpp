#include <bits/stdc++.h>
using namespace std;

int arr[10];

int mincoin(int a[], int n, int val){
	int cnt=0, crnt=0;
	for (int i=0; i<n; ++i){
		crnt= 0;
		while(val>=a[i]){
			val-= a[i];
			cnt++; crnt++;
		}
		arr[i]= crnt;
		if (val==0){
			break;
		}
	}
	return cnt;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i=0; i<n; ++i){
		cin >> a[i];
	}
	int val;
	cin >> val;
	cout << mincoin(a, n, val) << endl;
	for (int i=0; i<n; ++i){
		cout << arr[i] << " ";
	}
	return 0;
}