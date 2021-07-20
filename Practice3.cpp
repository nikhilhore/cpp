#include <bits/stdc++.h>
using namespace std;

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

BstNode* Insert(BstNode* root, int new_data);
BstNode* Delete(BstNode* root, int new_data);
bool Present(BstNode* root, int new_data);
BstNode* minimum(BstNode* root);
BstNode* maximum(BstNode* root);
int height(BstNode* root);
void preOrder(BstNode* root);
void postOrder(BstNode* root);
void inOrder(BstNode* root);
void levelOrder(BstNode* root);
bool checkBST(BstNode* root);

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

int height(BstNode* root){
    if (root==NULL) return -1;
    int lefth= height(root->left);
    int righth= height(root->right);
    return max(lefth, righth)+1;
}

void preOrder(BstNode* root){
    if (root==NULL) return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(BstNode* root){
    if (root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void inOrder(BstNode* root){
    if (root==NULL) return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
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

bool checkBST(BstNode* root){
    if (root==NULL) return true;
    if (root->data<maximum(root->left)) return false;
    if (root->data>minimum(root->right)) return false;
}

int main(){
    BstNode* root= NULL;
    int n, temp;
    cin >> n;
    for (int i=0; i<n; ++i){
        cin >> temp;
        root= Insert(root, temp);
    }
    int t;
    cin >> t;
    Present(root, t)? cout << "Yes" : cout << "No";
    cout << endl;
    cout << maximum(root)->data << endl;
    cout << minimum(root)->data << endl;
    cout << height(root) << endl;
    preOrder(root);
    cout << endl;
    postOrder(root);
    cout << endl;
    inOrder(root);
    cout << endl;
    levelOrder(root);
    cout << endl;
    checkBST(root)? cout << "YesBST" : cout << "NotBST";
    cout << endl;
    Present(root, t)? cout << "Yes" : cout << "No";
    cout << endl;

    Delete(root, 7);

    Present(root, t)? cout << "Yes" : cout << "No";
    cout << endl;
    cout << maximum(root)->data << endl;
    cout << minimum(root)->data << endl;
    cout << height(root) << endl;
    preOrder(root);
    cout << endl;
    postOrder(root);
    cout << endl;
    inOrder(root);
    cout << endl;
    levelOrder(root);
    cout << endl;
    checkBST(root)? cout << "YesBST" : cout << "NotBST";
    cout << endl;
    Present(root, t)? cout << "Yes" : cout << "No";
    cout << endl;
    return 0;
}