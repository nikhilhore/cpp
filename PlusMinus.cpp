#include <iostream>
#include <iomanip>
using namespace std;
int plusMinus(int arr[], int z) {
	int p=0, q=0, r=0;
	for (int j=0; j<z; ++j) {
		if (arr[j]> 0) p+=1;
		else if (arr[j]<0) q+=1;
		else r+=1;
	}
	int s=p+q+r;
	cout << fixed << setprecision(6) << (float) p/ (float) s <<endl;
	cout << fixed << setprecision(6) << (float) q/ (float) s <<endl;
	cout << fixed << setprecision(6) << (float) r/ (float) s;
	return 0;
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i=0; i<n; ++i) {
		cin >> arr[i];
	}
	plusMinus(arr, n);
	return 0;
}