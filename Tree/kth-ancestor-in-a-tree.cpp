int check(Node *root, int node, int count, int k, int &res)
{
    if(root==NULL)
    return 0;
    
    //if root data matches with the node, now backtrack from this node
    //increasing count till you find the correct ancestor
    if(root->data == node)
    return 1;
    if(check(root->left, node, count, k, res) || check(root->right, node, count, k, res))
    {
        count++;
        if(count==k)
            res=root->data;
        return 1;
    }
}
int kthAncestor(Node *root, int k, int node)
{
    int count =0, res=-1;
    check(root, node, count, k, res);
    return res;
}