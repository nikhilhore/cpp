#include <bits/stdc++.h>
using namespace std;

string palindromeExists(long arr[], long n){
	for (int i=0; i<n-2; ++i){
		for (int j=i+2; j<n; ++j){
			if (arr[i]==arr[j]) return "YES";
		}
	}
	return "NO";
}

int main(void){
	long t;
	cin >> t;
	for (long k=0; k<t; ++k){
		long n;
		cin >> n;
		long arr[n];
		for (long i=0; i<n; ++i){
			cin >> arr[i];
		}
		string yn= palindromeExists(arr, n);
		cout << yn << endl;
	}
	return 0;
}