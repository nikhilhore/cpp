#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, x, y;
	cin >> n >> m;
	map <int, int> mp;
	for (int i=0; i<m; ++i){
		cin >> x >> y;
		mp[x]++; mp[y]++;
	}
	int cnt=0;
	for (auto i: mp){
		if (i.second>1){
			cnt++;
		}
	}
	if (m==0) cout << 1;
	else cout << pow(2, cnt+1);
	return 0;
}