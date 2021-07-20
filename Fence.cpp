#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, k;
	cin >> n >> k;
	long long a[n];
	for (long long i=0; i<n; ++i){
		cin >> a[i];
	}
	long long sum=0, ind=0;
	long long min= 150000010;
	for (long long i=0; i<k; ++i){
		sum+=a[i];
	}
	if (sum<min){
		min= sum;
		ind= 0;
	}
	for (long long i=1; i<n-k+1; ++i){
		sum+= a[i+k-1];
		sum-= a[i-1];
		if (sum<min){
			min= sum;
			ind= i;
		}
	}
	cout << ++ind << endl;
	return 0;
}