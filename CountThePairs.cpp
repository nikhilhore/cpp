#include <iostream>
using namespace std;
int main(){
	int N,K;
	cin >> N >> K;
	int arr[N];
	for (int i=0; i<N; ++i){
		cin >> arr[i];
	}
	int cnt=0;
	for (int i=0; i<N; ++i){
		for (int j=0; j<i; ++j){
			int x=arr[i]-arr[j];
			if (x==K){
				cnt+=1;
			}
			else if (x==-K){
				cnt+=1;
			}
		}
	}
	cout << cnt;
	return 0;
}