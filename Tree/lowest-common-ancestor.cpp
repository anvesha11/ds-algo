Asked In: Accolite Amazon American Express Cisco Expedia
 Flipkart MakeMyTrip Microsoft OYO Rooms PayPal Payu
 Snapdeal Times Internet Twitter

Node * lca(Node* root,int n1,int n2)
{
    
    // base case
  if(root==NULL)
    return NULL;

  // If either n1 or n2 matches with root's key, report 
  // the presence by returning root (Note that if a key is 
  // ancestor of other, then the ancestor key becomes LCA 
  if(root->data==n1 or root->data==n2)
    return root;
    
  // Look for keys in left and right subtrees
  Node *l = lca(root->left,n1,n2);
  Node *r = lca(root->right,n1,n2);
  
  // If both of the above calls return Non-NULL, then one key
  // is present in once subtree and other is present in other, 
  // So this node is the LCA 
  if (l and r)
    return root;

  // Otherwise check if left subtree or right subtree is LCA
  return (l!=NULL)?l:r;
}