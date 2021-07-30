#include <iostream>
#include <deque>
using namespace std;

void print_deque(deque <int> d){
	// Here we can also use normal for loop.
	for (auto i:d){
		cout << i << " ";
	}
	cout << endl;
}

int main(){
	deque <int> d;
	d.push_back(1);
	d.push_front(2);
	d.push_back(3);
	d.push_front(4);
	d.push_back(5);
	d.push_front(6);
	print_deque(d);
	cout << d.size() << endl;
	d.pop_back();
	d.pop_front();
	print_deque(d);
	cout << d.size() << endl;
	cout << d.at(1) << endl;
	cout << d[3] << endl;
	d.erase(d.begin(), d.begin()+1);
	print_deque(d);
	cout << d.size() << endl;
	return 0;
}