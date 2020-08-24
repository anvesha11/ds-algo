Asked In: Adobe Amazon D-E-Shaw Goldman Sachs

int add(Node* root)
{
    if(root==NULL)
    return 0;
    int sum = root->data + add(root->left) + add(root->right);
    return sum;
}
// Should return true if tree is Sum Tree, else false
bool isSumTree(Node* root)
{
     // Your code here
     if(root==NULL)
     return 1;
     if(root->left==NULL && root->right==NULL)
     return 1;
     int leftSum=add(root->left);
     int rightSum=add(root->right);
     
     if(root->data == leftSum + rightSum)
     {
         if(isSumTree(root->left) && isSumTree(root->right))
         return 1;
     }
     return 0;
}