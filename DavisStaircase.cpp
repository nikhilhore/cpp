#include <iostream>
using namespace std;

int stepPerms(int n){
	int arr[n];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 4;
 
    for (int i = 3; i <= n; ++i)
        arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
     
    return arr[n-1];
}

int main() {
	int s;
	cin >> s;
	for (int i=0; i<s; ++i){
		int n;
		cin >> n;
		cout << stepPerms(n) << endl;
	}
	return 0;
}