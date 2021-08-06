#include <iostream>
using namespace std;

void permutations(string s, int index){
	if (index==s.size()){
		cout << s << endl;
		return;
	}
	for (int i=index; i<s.size(); ++i){
		swap(s[index], s[i]);
		permutations(s, index+1);
		// backtrack
		swap(s[index], s[i]);
	}
}

int main(){
	string s= "nik";
	permutations(s, 0);
	return 0;
}