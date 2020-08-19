Asked In: Ola Cabs Samsung

int countLeaves(Node* root)
{
  // Your code here
  if(root==NULL)
    return 0;
  else if(root->left == NULL && root->right == NULL)
    return 1;
  return countLeaves(root->left) + countLeaves(root->right);
}