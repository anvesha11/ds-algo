Asked In: Accolite Amazon Flipkart MAQ Software Microsoft Samsung Synopsys

Node* LCA(Node *root, int l, int r)
{
   if(root == NULL)
    return NULL;
    //if both are greater then go to right subtree
    if(l> root->data && r>root->data)
        return LCA(root->right, l, r);
    
    //when both are lesser then go to left subtree
    if(l< root->data && r<root->data)
        return LCA(root->left, l, r);
        
    //when even one of them becomes equal to root data
    return root;
}
