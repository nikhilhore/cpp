#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, k;
	cin >> n >> k;
	int time= 240-k;
	int j=0, sum=0;
	for (int i=1; i<=n; ++i){
		if (sum>=time){
			break;
		}
		sum+=5*i;
		j+=1;
	}
	if (sum>time) j-=1;
	cout << j;
	return 0;
}