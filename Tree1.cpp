#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    vector <Node*> v;
    Node(int new_data){
        this->data= new_data;
    }
};

Node* Insert(Node* root, vector <int> arr){
    int n= arr.size();
    stack <Node*> st;
    for (int i=0; i<n; ++i){
        if (arr[i]==-1) {
            st.pop();
        }
        else {
            Node* new_node= new Node(arr[i]);
            if (!st.empty()){
                st.top()->v.push_back(arr[i]);
            }
            else {
                root= newnode;
            }
            st.push(arr[i]);
        }
    }
    return root;
}

int main(){
    int temp;
    Node* root;
    vector <int> arr;
    while (cin>>temp){
        arr.push_back(temp);
    }
    root= Insert(root, arr);
    return 0;
}