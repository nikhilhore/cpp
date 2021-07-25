#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int new_data){
        this->data= new_data;
        this->next= NULL;
    }
};

const int n=5;
Node* adj[n];

void init(){
    for (int i=0; i<n; ++i){
        // adj[i]= NULL;
        adj[i]= new Node(0);
    }
}

void addEdge(int row, int new_data){
    Node* new_node= new Node(new_data);
    if (adj[row]==NULL) adj[row]= new_node;
    else {
        Node* temp= adj[row];
        while(temp->next!=NULL){
            temp= temp->next;
        }
        temp->next= new_node;
    }
}

void addEdgeFront(int row, int new_data){
    Node* new_node= new Node(new_data);
    new_node->next= adj[row];
    adj[row]= new_node;
    // For undirected graph
    // Node* new_node2= new Node(row);
    // new_node2->next= adj[new_data];
    // adj[new_data]= new_node2;
}

void deleteEdge(int row, int new_data){
    Node* current= adj[row];
    if (adj[row]->data==new_data){
        adj[row]= current->next;
        free(current);
    }
    else {
        Node* prev= current;
        current= current->next;
        while (current->data!=new_data){
            prev= current;
            current= current->next;
        }
        prev->next= current->next;
        free(current);
    }
}

bool hasEdge(int row, int new_data){
    Node* temp= adj[row];
    while(temp!=NULL){
        if (temp->data==new_data) return 1;
        temp= temp->next;
    }
    return 0;
}

void printList(){
    for (int i=0; i<n; ++i){
        Node* temp= adj[i];
        while (temp!=NULL){
            cout << temp->data << " ";
            temp= temp->next;
        }
        cout << endl;
    }
}

int main(){
    init();
    addEdge(0, 5);
    addEdge(0, 6);
    addEdge(0, 7);
    addEdgeFront(0, 4);
    deleteEdge(0, 7);
    printList();
    cout << endl << hasEdge(0, 3) << endl;
    return 0;
}