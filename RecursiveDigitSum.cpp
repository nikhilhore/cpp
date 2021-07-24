#include <bits/stdc++.h>
#include <string>
using namespace std;

string recursiveSum(string n){
	int l= n.length();
	if (l==1) return n;
	int sum=0;
	for (int i=0; i<l; ++i){
		sum+= n[i]-'0';
	}
	string x= to_string(sum);
	return recursiveSum(x);
}

int main(void){
	int k;
	string n, x;
	cin >> n >> k;
	for (int i=0; i<k; ++i){
		x+=n;
	}
	string a =recursiveSum(x);
	cout << a;
	return 0;
}