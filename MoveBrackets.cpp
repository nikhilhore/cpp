#include <bits/stdc++.h>
using namespace std;
int main(void){
	int t;
	cin >> t;
	for (int j=0; j<t; ++j){
		int n;
		cin >> n;
		string s;
		cin >> s;
		int cnt=0;
		int c1=0, c2=0;
		for (int i=0; i<n; ++i){
			if (s[i]=='(') c1++;
			else c2++;
			if (c2>c1){
				if (s[i]==')'){
					c2--;
					s.push_back(')');
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}