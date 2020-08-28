Asked In: Accolite Amazon Samsung SAP Labs

void kthLargestUtil(Node *root, int k, int &c, int &res)
{
    if(root==NULL || c>=k)
        return;
    
    
    //first go to right subtree as we want to get "largest" elements    
    kthLargestUtil(root->right, k, c, res);
    c++;
    if(c==k)
    {
        res = root->data;
        return;
    }
    //it goes to left subtree when it doesn't find it in the right alone
    kthLargestUtil(root->left, k, c,res);
    
}
int kthLargest(Node *root, int k)
{
    int c = 0;
    int res = -1;
    kthLargestUtil(root, k, c, res);
    return res;
}