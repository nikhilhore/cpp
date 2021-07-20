#include <bits/stdc++.h>
using namespace std;
const int size= 100;
long long memo[size+1];

long long fib(int n){
	long long result;
	if (memo[n]!=0){
		return memo[n];
	}
	if (n==1 or n==2){
		return 1;
	}
	else {
		result= fib(n-1)+fib(n-2);
		memo[n]= result;
	}
	return result;
}

int main(){
	int n;
	cin >> n;
	cout << fib(n);
	return 0;
}