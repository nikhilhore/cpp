#include <iostream>
#include <list>
using namespace std;

class Graph {
	int V;
	list<int> *l;
public:
	Graph(int v){
		this->V= v;
		l= new list<int> [V];
	}
	void addEdge(int x, int y){
		l[x].push_back(y);
		// for undirected graph uncomment below statement
		// l[y].push_back(x);
	}
	void printAdjList(){
		// Iterate over all the vertices
		for (int i=0; i<V; ++i){
			cout << i << " -> ";
			for (int j : l[i]){
				cout << j << " ";
			}
			cout << endl;
		}
	}
};

int main(){
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 3);
	g.addEdge(3, 1);
	if (g.contains_cycle()){
		cout << true;
	}
	else cout << false;
	return 0;
}