#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Four inputs x, y, z, w are taken from stdin.
// Equation is of the form x^y + x^z
// We have to find the w right most digits of the following equation.

int main() {
	long c, d, e, f, g=1, h=1;
	long x, y, z, w=0, v=1;
	cin >> x >> y >> z >> w;
	for(int i=0; i<w; ++i){
		v*=10;
	}
	// cout << v << endl;
	// int r=1;
	// for(int i=0; i<100; ++i){
	// 	if (r>v) break;
	// 	r*=x;
	// 	w+=1;
	// }
	// cout << w << endl;
	int a=y%14;
	int b=z%14;
	int k=(y-a)/14;
	int l=(z-b)/14;
	c=pow(x, 14);
	d=pow(x, 14);
	e=c%v;
	f=d%v;
	for (int i=0; i<k; ++i){
		g*=e;
		g%=v;
	}
	for (int i=0; i<l; ++i){
		h*=f;
		h%=v;
	}
	long p=g*(pow(x,a));
	long q=h*(pow(x,b));
	e= (p+q)%v;
	cout << fixed << e;
    return 0;
}