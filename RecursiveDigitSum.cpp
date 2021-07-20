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
	string n;
	cin >> n;
	string a =recursiveSum(n);
	cout << a;
	return 0;
}