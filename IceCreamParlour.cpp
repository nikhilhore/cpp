#include <bits/stdc++.h>
using namespace std;
void icecreamParlor(int arr[], int m, int n){
	int a,b;
	for (int i=0; i<n-1; ++i){
		for (int j=i+1; j<n; ++j){
			if (arr[i]+arr[j]==m){
				a=i+1;
				b=j+1;
			}
		}
	}
	cout << a << ' ' << b << endl;
}

int main(){
	int t;
	cin >> t;
	for (int i=0; i<t; ++i){
		int m, n;
		cin >> m >> n;
		int cost[n];
		for (int j=0; j<n; ++j){
			cin >> cost[j];
		}
		icecreamParlor(cost, m, n);
	}
	return 0;
}