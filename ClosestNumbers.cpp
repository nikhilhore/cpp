#include <bits/stdc++.h>
using namespace std;
void closestNumbers(long a[], long n){
	sort(a, a+n);
	long dif[n-1];
	for(long i=0; i<n-1; ++i){
		dif[i]=abs(a[i]-a[i+1]);
	}
	long min= *min_element(dif, dif+n);
	long j=0, cnt=0;
	for(long i=0; i<n-1; ++i){
		if (abs(a[i]-a[i+1])==min){
			cnt+=2;
		}
	}
	long arr[cnt];
	for(long i=0; i<n-1; ++i){
		if (abs(a[i]-a[i+1])==min){
			arr[j++]=a[i];
			arr[j++]=a[i+1];
		}
	}
	for (long i=0; i<cnt; ++i){
		cout << arr[i] << ' ';
	}
	return;
}

int main(){
	long n;
	cin >> n;
	long a[n];
	for (long i=0; i<n; ++i){
		cin >> a[i];
	}
	closestNumbers(a, n);
	return 0;
}