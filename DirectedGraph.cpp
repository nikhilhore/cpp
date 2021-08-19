#include <iostream>
#include <vector>
using namespace std;

class Edge {
public:
	int src;
	int dest;
	int weight;
};

typedef pair<int, int> Pair;

class Graph {
public:
	vector<vector<Pair>> adjList;

	Graph(vector<Edge> edges, int V){
		adjList.resize(V);

		for (auto &edge: edges){
			int src= edge.src;
			int dest= edge.dest;
			int weight= edge.weight;

			adjList[src].push_back(make_pair(dest, weight));
		}
	}
	void printGraph(int V){
		for (int i=0; i<V; ++i){
			for (Pair v: adjList[i])
	        {
	            cout << "(" << i << ", " << v.first << ", " << v.second << ") ";
	        }
			cout << endl;
		}
	}
};

int main(){
	int V;
	cin >> V;
	int E;
	cin >> E;
	vector<Edge> edges(E);
	vector<Edge> vec;
	for (int i=0; i<E; ++i){
		Edge e;
		cin >> e.src >> e.dest >> e.weight;
		edges[i]= e;
	}
	Graph graph(edges, V);
	graph.printGraph(V);
	return 0;
}