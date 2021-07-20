#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

int main(){
	vector <string> s;
	string str;
	getline(cin, str);
	string word = "";
    for (auto x : str) 
    {
        if (x == ' ')
        {
            cout << word << endl;
            word = "";
        }
        else {
            word = word + x;
        }
    }
    s=word;
	for(int i=0; i<cnt; ++i){
		cout << s[i] << endl;
	}
	return 0;
}