
Asked In: FactSet SAP Labs
Node *BST(Node *root, int d)
{   //if there is no node at the position where we want to insert
    //then we create a new node and assign the value to it d
    if(root==NULL)
        root = new Node(d);
        
    //if there is already present then go down towards left or right subtree
    else if(d>root->data)
        root->right = BST(root->right, d);
    else
        root->left = BST(root->left, d);
    
    return root;
}
Node *constructTree (int post[], int size)
{
    if(size == 0)
        return NULL;
        
    Node *root=NULL;
    //find the root for every element present in the array
    //means find the correct position for every elemenet
    for(int i=0;i<size;i++)
        root = BST(root, post[i]);
        
    return root;
}