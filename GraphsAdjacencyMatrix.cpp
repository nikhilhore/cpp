#include <iostream>
using namespace std;

const int n=5;
int adjMatrix[n][n];

void addEdge(int row, int col){
    adjMatrix[row][col]= 1;
    // adjMatrix[col][row]= 1; // For undirected graph.
}

void deleteEdge(int row, int col){
    adjMatrix[row][col]= 0;
    // adjMatrix[col][row]= 0; // For undirected graph.
}

void printMatrix(){
    for (int i=0; i<n; ++i){
        for (int j=0; j<n; ++j){
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

bool hasEdge(int row, int col){
    if (adjMatrix[row][col]) return true;
    return false;
}

int main(){
    addEdge(1,3);
    printMatrix();
    cout << hasEdge(1,3);
    return 0;
}