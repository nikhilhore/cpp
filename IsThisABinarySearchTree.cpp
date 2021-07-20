vector <int> a;
void inOrder(Node* root){
    if (root==NULL) return;
    inOrder(root->left);
    a.push_back(root->data);
    inOrder(root->right);
}

bool checkBST(Node* root) {
    inOrder(root);
    int n= a.size();
    for (int i=0; i<n-1; ++i){
        if (a[i]>=a[i+1]) return false;
    }
    return true;
}