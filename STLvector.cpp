#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector <int> v;
	v.clear();
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	cout << v.size() << endl;
	cout << v.capacity() << endl;
	cout << v.max_size() << endl;
	v.shrink_to_fit();
	cout << v.capacity() << endl;
	cout << endl;
	cout << v.at(2) << endl;
	v.pop_back();
	cout << v.back() << endl;
	cout << v.front() << endl;
	return 0;
}