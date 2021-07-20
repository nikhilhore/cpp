#include <bits/stdc++.h>
using namespace std;

int main(void){
	float l, r, x, y, k;
	cin >> l >> r >> x >> y >> k;
	float i=l;
	float j=x;
	string yn= "NO";
	while (i<=r && j<=y){
		float e= i/j;
		if (e==k){
			yn="YES";
			break;
		}
		if (e<k) i++;
		if (e>k) j++;
	}
	cout << yn;
	return 0;
}