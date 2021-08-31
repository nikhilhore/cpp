#include <iostream>
#include <unordered_map>
#include <list>
#include <map>
#include <queue>
#include <stack>
using namespace std;

template<typename T>
class Graph {
    map<T, list<T>> m;
public:
    void addEdge(int x, int y){
        m[x].push_back(y);
        m[y].push_back(x);
    }
    void bfs(int src){
        map<T, bool> visited;
        queue<T> q;

        q.push(src);
        visited[src]= true;
        while(!q.empty()){
            T node= q.front();
            q.pop();
            cout << node << " ";
            for (auto i : m[node]){
                if (visited[i]!=true){
                    q.push(i);
                    visited[i]= true;
                }
            }
        }
        cout << endl;
        return;
    }
    void dfs(int src){
        map<T, bool> visited;
        stack<T> s;

        s.push(src);
        visited[src]= true;

        while(!s.empty()){
            T node= s.top();
            s.pop();
            cout << node << " ";
            for (auto i : m[node]){
                if (visited[i]!=true){
                    s.push(i);
                    visited[i]= true;
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
    g.dfs(0);
    return 0;
}