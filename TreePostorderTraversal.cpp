void postOrder(Node *root) {
    if (root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    std::cout << root->data << " ";
}