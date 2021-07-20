#include <bits/stdc++.h>
using namespace std;
int main(){
	string Adr, Bru, Gor;
	for(int i=0; i<34; ++i){
		Adr+="ABC";
		Bru+="BABC";
		Gor+="CCAABB";
	}
	// cout << Adr << endl << Bru << endl << Gor << endl;
	int N;
	cin >> N;
	string arr;
	cin >> arr;
	int a=0, b=0, g=0;
	for (int j=0; j<N; ++j){
		if (arr[j]==Adr[j]) a++;
		if (arr[j]==Bru[j]) b++;
		if (arr[j]==Gor[j]) g++;
	}
	int maxx= max(a,b);
	maxx= max(maxx, g);
	cout << maxx << endl;
	if (maxx==a){
		cout << "Adrian" << endl;
	}
	if (maxx==b){
		cout << "Bruno" << endl;
	}
	if (maxx==g){
		cout << "Goran" << endl;
	}
	return 0;
}