#include <iostream>
#include <set>
using namespace std;

void print_set(set <int> s){
	for (auto i:s){
		cout << i << " ";
	}
	cout << endl;
}

int main(){
	set <int> s;

	s.insert(5);
	s.insert(5);
	s.insert(5);
	s.insert(6);
	s.insert(2);
	s.insert(2);
	s.insert(4);
	s.insert(3);

	print_set(s);
	s.erase(s.begin());
	print_set(s);

	set <int>::iterator it = s.begin();
	it++;
	s.erase(it);
	print_set(s);

	cout << s.count(5) << endl;

	set <int>::iterator finder = s.find(5);
	cout << *finder << endl;

	cout << *s.find(4) << endl;
	return 0;
}