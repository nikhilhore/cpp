#include <bits/stdc++.h>
using namespace std;

char mirror(char a){
    if (a=='}') return '{';
    if (a==']') return '[';
    return '(';
}

string isBalanced(string s) {
    int l= s.size();
    if (l%2!=0) return "NO";
    vector <char> arr;
    arr.push_back(s[0]);
    for (int i=1; i<l; ++i){
        char a= s[i];
        int n= arr.size()-1;
        if (a=='{' || a=='[' || a=='('){
            arr.push_back(a);
            continue;
        }
        if (arr[n]==mirror(a)) arr.pop_back();
        else arr.push_back(a);
    }
    if (arr.size()==0) return "YES";
    return "NO";
}

int main(){
	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		string yn= isBalanced(s);
		cout << yn << endl;
	}
	return 0;
}