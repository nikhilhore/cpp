#include <iostream>
#include <unordered_map>
#include <list>
#include <cstring>
using namespace std;

class Graph{
	unordered_map<char, list<pair<char, int>>> m;
public:
	void addEdge(char x, char y, bool bidir, int wt){
		m[x].push_back(make_pair(y, wt));
		if (bidir){
			m[y].push_back(make_pair(x, wt));
		}
	}
	void printAdjListMap(){
		for (auto i : m){
			cout << i.first << " -> ";
			for (auto j : i.second){
				cout << "(" << j.first << ", " << j.second << ")"<< " ";
			}
			cout << endl;
		}
	}
};

int main(){
	Graph g;
	g.addEdge('a', 'b', true, 20);
	g.addEdge('b', 'd', true, 30);
	g.addEdge('d', 'c', true, 40);
	g.addEdge('c', 'a', true, 10);
	g.addEdge('a', 'd', false, 50);
	g.printAdjListMap();
	return 0;
}