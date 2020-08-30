
Asked In: Paytm
/* This function traverse the skewed binary tree and 
   stores its nodes pointers in vector nodes[] */
void storeBSTNodes(Node* root, vector<Node* > &nodes)
{
    if(root==NULL)
    return;
    
    //inorder traversal to store the tree in nodes vector which will be the sorted vector
    storeBSTNodes(root->left, nodes);
    nodes.push_back(root);
    storeBSTNodes(root->right, nodes);
    
}

Node* buildTreeUtil(vector<Node*> &nodes, int start, int end)
{
    if(start>end)
    return NULL;
    
    //get middle element and store it as root
    int mid = (start+end)/2;
    Node* root = nodes[mid];
    
    //using inorder traversal construct left and right subtrees
    root->left = buildTreeUtil(nodes, start, mid-1);
    root->right = buildTreeUtil(nodes, mid+1, end);
    
    return root;
}
Node* buildBalancedTree(Node* root)
{
	vector<Node*> nodes;
	// Store nodes of given BST in sorted order 
	storeBSTNodes(root, nodes);
	// Constucts BST from nodes[] 
	int n = nodes.size();
	
	return buildTreeUtil(nodes, 0, n-1);
}
