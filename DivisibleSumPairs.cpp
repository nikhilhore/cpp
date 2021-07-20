#include <iostream>
using namespace std;
int main(){
	int n,k,cnt=0;
	cin >> n >> k;
	int arr[n];
	for (int l=0; l<n; ++l){
		cin >> arr[l];
	}
	for (int j=0; j<n; ++j){
		for (int i=0; i<j; ++i){
			if ((arr[i]+arr[j])%k==0) cnt+=1;
		}
	}
	cout << cnt;
	return 0;
}