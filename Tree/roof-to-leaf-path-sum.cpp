Asked In: Accolite Adobe Amazon CouponDunia FactSet Goldman Sachs
Housing.com Microsoft Oracle Samsung

bool hasPathSum(Node *node, int sum) {
    // Your code here
    if(node==NULL)
    return (sum==0);
    
    //if it is a leaf node 
    //and the data in leaf node is equal to the acquired sum
    
    if(node->left==NULL && node->right == NULL)
    {
        if(node->data == sum)
        return true;
        else
        return false;
    }
    //check for left subtree
    if(hasPathSum(node->left, sum-node->data))
    return true;
    //now check for right subtree
    if(hasPathSum(node->right, sum-node->data))
    return true;
    
    //if no such path is found
    return false;
}