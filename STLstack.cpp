#include <iostream>
#include <stack>
using namespace std;

int main(){
	stack <char> s;
	s.push('a');
	s.push('b');
	s.push('c');
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	cout << s.size() << endl;
	cout << s.empty() << endl;
	return 0;
}