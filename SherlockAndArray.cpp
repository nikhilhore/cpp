#include <bits/stdc++.h>
using namespace std;
string balancedSums(int arr[], int n){
	int sum=0;
	for (int i=0; i<n; ++i){
		sum+=arr[i];
	}
	int left=0, right=0;
	for (int i=0; i<n; ++i){
        right= sum-arr[i]-left;
        if (left==right){
            return "YES";
        }
        left+=arr[i];
    }
    return "NO";
}

int main(){
	int t;
	cin >> t;
	for (int i=0; i<t; ++i){
		int n;
		cin >> n;
		int arr[n];
		for (int i=0; i<n; ++i){
			cin >> arr[i];
		}
		string yn= balancedSums(arr, n);
		cout << yn << endl;
	}
	return 0;
}