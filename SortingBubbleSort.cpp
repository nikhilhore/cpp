#include <iostream>
using namespace std;
void countSwaps(int a[],int n){
	int cnt=0;
	for (int i=0; i<n; ++i){
		for (int j = 0; j < n - 1; j++) {
        	if (a[j] > a[j + 1]) {
            	swap(a[j], a[j + 1]);
            	cnt+=1;
        	}
    	}
	}
	cout << "Array is sorted in "<< cnt << " swaps." << endl;
	cout << "First Element: " << a[0] << endl;
	cout << "Last Element: " << a[n-1];
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for (int i=0; i<n; ++i){
		cin >> arr[i];
	}
	countSwaps(arr, n);
	return 0;
}