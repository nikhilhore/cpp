#include <iostream>
#include <list>
using namespace std;

/* list data structure is implemented 
  internally using doubly linked list
  so time complexity of every operation 
  will be same as doubly linked list */
void print_list(list <int> l){
	/* Here we are traversing the linked list
	so we can not use normal for loop */
	for (int i:l){
		cout << i << " ";
	}
	cout << endl;
}

int main(){
	list <int> l;
	// We can not use l.at(n) or l[n] in lists.
	l.push_back(1);
	l.push_front(2);
	l.push_back(3);
	l.push_front(4);
	print_list(l);
	cout << l.size() << endl;
	l.erase(l.begin());
	print_list(l);
	return 0;
}