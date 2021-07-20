#include <bits/stdc++.h>
using namespace std;

vector<string> weightedUniformStrings(string s, vector<int> queries) {
	int l= s.length();
    int q= queries.size();
    string az= " abcdefghijklmnopqrstuvwxyz";
    vector <int> poswts;
    for (int j=1; j<=26; ++j){
        if (s[0]==az[j]){
            poswts.push_back(j);
            break;
        }
    }
    int sum= poswts[0];
    for (int i=1; i<l; ++i){
        for (int j=1; j<=26; ++j){
            if (s[i]==az[j]){
                if (s[i]==s[i-1]){
                    sum+= j;
                }
                else {
                    sum=j;
                }
                poswts.push_back(sum);
                break;
            }
        }
    }
    int n= poswts.size();
    bool found;
    vector <string> retstr;
    for (int i=0; i<q; ++i){
        found= false;
        for (int j=0; j<n; ++j){
            if (queries[i]==poswts[j]){
                found= true;
                break;
            }
        }
        if (found) retstr.push_back("Yes");
        else retstr.push_back("No");
    }
    return retstr;
}

int main(void){
	string s;
	cin >> s;
	int n;
	cin >> n;
	int temp;
	vector <int> queries;
	for (int i=0; i<n; ++i){
		cin >> temp;
		queries.push_back(temp);
	}
	vector <string> newque;
	newque= weightedUniformStrings(s, queries);
	for (int i=0; i<n; ++i){
		cout << newque[i] << endl;
	}
	return 0;
}