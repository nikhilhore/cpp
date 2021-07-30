#include <iostream>
#include <queue>
using namespace std;

void print_heap(priority_queue <int> heap){
	while (heap.size()){
		cout << heap.top() << " ";
		heap.pop();
	}
	cout << endl;
}

void print_heap(priority_queue <int, vector<int>, greater<int>> heap){
	while (heap.size()){
		cout << heap.top() << " ";
		heap.pop();
	}
	cout << endl;
}

int main(){
	priority_queue <int> maxheap;
	priority_queue <int, vector<int>, greater <int>> minheap; 
	
	maxheap.push(2);
	maxheap.push(3);
	maxheap.push(1);
	maxheap.push(5);
	maxheap.push(4);

	minheap.push(2);
	minheap.push(3);
	minheap.push(1);
	minheap.push(5);
	minheap.push(4);

	cout << maxheap.size() << endl;
	print_heap(maxheap);
	cout << maxheap.size() << endl;
	print_heap(minheap);
	return 0;
}