#include <iostream>
using namespace std;

void subsequence(string s, string op, int index){
	if (index== s.size()){
		cout << op << endl;
		return;
	}
	subsequence(s, op, index+1);
	op+=s[index];
	subsequence(s, op, index+1);
}

int main(){
	string s= "nikhil";
	subsequence(s, "", 0);
	return 0;
}