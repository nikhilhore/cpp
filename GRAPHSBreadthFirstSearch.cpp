#include <iostream>
#include <map>
#include <list>
#include <queue>
using namespace std;

template<typename T>
class Graph {
	map<T, list<T>> m;
public:
	void addEdge(T x, T y){
		m[x].push_back(y);
		m[y].push_back(x);
	}
	void bfs(T src){
		map <T, bool> visited;
		queue<T> q;

		q.push(src);
		visited[src]= true;

		while(!q.empty()){
			// node is the current node for bfs traversal
			T node = q.front();
			q.pop();
			cout << node << " ";
			// j is neighbor of node
			for (auto j: m[node]){
				if (!visited[j]){
					q.push(j);
					visited[j]= true;
				}
			}
		}
		cout << endl;
		return;
	}
};

int main(){
	Graph<int> g;
	g.addEdge(0, 1);
	g.addEdge(0, 3);
	g.addEdge(1, 2);
	g.addEdge(2, 3);
	g.addEdge(3, 4);
	g.addEdge(4, 5);

	g.bfs(0);
	return 0;
}