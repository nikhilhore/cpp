#include <iostream>
#include <queue>
using namespace std;

int main(){
	queue <char> q;
	q.push('a');
	q.push('b');
	q.push('c');
	cout << q.front() << endl;
	cout << q.size() << endl;
	cout << q.back() << endl;
	return 0;
}