#include <bits/stdc++.h>
using namespace std;
int main(void){
	string yn="YES";
	for (int j=0; j<8; ++j){
		string s;
		cin >> s;
		int c= count(s.begin(), s.end(), 'W');
		if (c!=4){
			yn= "NO";
			break;
		}
		for (int i=0; i<6; ++i){
			if (s[i]==s[i+1]){
				for (int j=i+1; j<7; ++j){
					if (s[j]==s[j+1]){
						yn="NO";
						break;
					}
				}
			}
		}
		if (s[0]==s[7]){
			if (s[0]==s[1] || s[0]==s[6]){
				yn= "NO";
				break;
			}
		}
		for (int i=0; i<6; ++i){
			if (s[i]==s[i+1] && s[i]==s[i+2]){
				yn= "NO";
				break;
			}
		}
		for (int i=0; i<8; ++i){

		}
	}
	cout << yn;
	return 0;
}