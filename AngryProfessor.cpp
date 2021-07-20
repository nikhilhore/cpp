#include <iostream>
using namespace std;

string angryProfessor(int n,int k){
	int arr[n];
	for (int j=0; j<n; ++j){
		cin >> arr[j];
	}
	int cnt=0;
	for (int j=0; j<n; ++j){
		if (arr[j] <= 0) cnt+=1;
	}
	if (cnt>=k) return "NO";
	else return "YES";
}

int main(){
	int t;
	cin >> t;
	for (int i=0; i<t; ++i){
		int n=0,k=0;
		string z;
		cin >> n >> k;
		z=angryProfessor(n,k);
		cout << z << endl;
	}
	return 0;
}