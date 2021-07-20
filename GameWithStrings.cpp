#include <bits/stdc++.h>
using namespace std;

bool yesno(string s){
	bool tf= false;
	bool yn= false;
	bool nik= false;
	while(!tf){
		tf= false;
		yn= false;
		int l= s.size();
		// cout << l << endl;
		for (int i=0; i<l-1; ++i){
			if (s[i]==s[i+1]){
				yn= true;
				s.erase(i,2);
				break;
			}
		}
		if (yn) nik= !nik;
		// cout << l << endl;
		if (!yn) tf= true;
	}
	return nik;
}

int main(){
	string s;
	cin >> s;
	bool yn= yesno(s);
	if (yn) cout << "Yes";
	else cout << "No";
	return 0;
}