#include <bits/stdc++.h>
using namespace std;
const int size= 10;

class BstNode{
public:
	int data;
	BstNode* left;
	BstNode* right;
	BstNode(int new_data){
		this->data= new_data;
		this->left= nullptr;
		this->right= nullptr;
	}
};

BstNode* arr[size];
void init(){
    for (int i=0; i<size; ++i){
        arr[i]= new BstNode(-1);
    }
}

BstNode* Insert(BstNode* root, int new_data){
    if (root==NULL){
        root= new BstNode(new_data);
    }
    else if (new_data<=root->data){
        root->left= Insert(root->left, new_data);
    }
    else {
        root->right= Insert(root->right, new_data);
    }
    return root;
}

bool Present(BstNode* root, int new_data){
    if (root==NULL) return false;
    if (new_data==root->data) return true;
    else if (new_data<root->data){
        return Present(root->left, new_data);
    }
    else {
        return Present(root->right, new_data);
    }
}

BstNode* minimum(BstNode* root){
    while(true){
        if (root->left==NULL) return root;
        else root= root->left;
    }
}

BstNode* maximum(BstNode* root){
    while(true){
        if (root->right==NULL) return root;
        else root= root->right;
    }
}

void levelOrder(BstNode* root){
    if (root==NULL) return;
    queue<BstNode*> q;
    q.push(root);
    while(!q.empty()){
        BstNode* current= q.front();
        cout << current->data << " ";
        if (current->left!=NULL) q.push(current->left);
        if (current->right!=NULL) q.push(current->right);
        q.pop();
    }
}

BstNode* Delete(BstNode* root, int new_data){
    if (root==NULL) return root;
    else if (new_data<root->data) root->left= Delete(root->left, new_data);
    else if (new_data>root->data) root->right= Delete(root->right, new_data);
    else {
        if (root->left==NULL && root->right==NULL){
            delete root;
            root= NULL;
        }
        else if (root->left==NULL){
            BstNode* temp= root;
            root= root->right;
            delete temp;
        }
        else if (root->right==NULL){
            BstNode* temp= root;
            root= root->left;
            delete temp;
        }
        else {
            BstNode* temp= minimum(root->right);
            root->data= temp->data;
            root->right= Delete(root->right, temp->data);
        }
    }
    return root;
}

void insert(int data){
	int index= data % size;
	int key= index;
	if (arr[index]->data!=-1){
		Insert(arr[index], data);
	}
	else arr[index]->data= data;
	return;
}

void del(int data){
	int index= data % size;
	int key= index;
	if (data==arr[index]->data){
		arr[index]= Delete(arr[index], data);
	}
	else Delete(arr[index], data);
	return;
}

int search(int data){
	int index= data % size;
	int key= index;
	if (Present(arr[index], data)){
		return index;
	}
	return -1;
}

int main(){
	init();
	int temp;
	for (int i=0; i<size; ++i){
        cin >> temp;
        insert(temp);
    }
    for (int i=0; i<size; ++i){
        levelOrder(arr[i]);
    }
    cout << endl;
    cin >> temp;
    cout << search(temp) << endl;
    del(temp);
    for (int i=0; i<size; ++i){
        levelOrder(arr[i]);
    }
	return 0;
}