#include <iostream>
using namespace std;
int main() {
	int n,k,cnt=0;
	cin >> n >> k;
	int arr[n];
	for (int i=1; i<=n; ++i) {
		cin >> arr[i];
	}
	for (int j=1; j<=n; ++j) {
		if (arr[j]>0){
			if (arr[j] >= arr[k]) {
				cnt+=1;
			}
		}
	}
	cout << cnt;
	return 0;
}