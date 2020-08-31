Asked in DE Shaw and Google

int total(Node* root,int l,int r)
{
    // base case
    if(root==NULL)
    return 0;
    int count=0;
    
    // check if data of root lies in range of l and r
    if(root->data>=l&&root->data<=r)
    count++;
    
    // recurse for left and right
    return count+total(root->left, l, r)+total(root->right, l, r);
    
}


int getCountOfNode(Node *root, int l, int h)
{
    // base case
    if(root==NULL)
        return 0;
  
    return total(root,l,h);
}
