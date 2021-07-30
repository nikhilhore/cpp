#include <iostream>
#include <map>
using namespace std;

void print_map(map <char, int> m){
	for (auto i: m){
		cout << i.first << " " << i.second << endl;
	}
}

int main(){
	map <char, int> m;
	m['c']= 2;
	m['d']= 6;
	m['a']= 3;
	m['b']= 7;
	m.insert({'e', 5});
	print_map(m);

	m.erase('d');
	cout << endl;
	print_map(m);

	auto it = m.find('c');
	cout << endl;
	for (auto i=it; i!=m.end(); ++i){
		cout << (*i).first << endl;
	}
	return 0;
}