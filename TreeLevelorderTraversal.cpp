void levelOrder(Node* root){
	cout << root->data << ' ';
	if (root->left!=NULL){
		levelOrder(root->left);
	}
	if (root->right!=NULL){
		levelOrder(root->right);
	}
}