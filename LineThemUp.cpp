#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	string arr[n];
	for (int i=0; i<n; ++i){
		cin >> arr[i];
	}
	string z;
	if (arr[0]<arr[1]){
		for (int i=0; i<n-1; ++i){
			if (arr[i]>=arr[i+1]){
				z="NEITHER";
				break;
			}
			else z="INCREASING";
		}
	}
	else if (arr[0]>arr[1]){
		for (int i=0; i<n-1; ++i){
			if (arr[i]<=arr[i+1]){
				z="NEITHER";
				break;
			}
			else z="DECREASING";
		}
	}
	else z="NEITHER";	
	cout << z;
	return 0;
}