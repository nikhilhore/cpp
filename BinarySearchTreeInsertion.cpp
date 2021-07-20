Node * insert(Node * root, int data) {
    if (root==NULL){
        Node* newnode= new Node(data);
        root= newnode;
    }
    else if(root->data>data) {
        root->left= insert(root->left, data);
    }
    else {
        root->right= insert(root->right, data);
    }
    return root;
}