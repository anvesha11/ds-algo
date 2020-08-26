Asked In: Amazon Linkedin MakeMyTrip Ola Cabs Qualcomm Samsung

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

/* Should return minimum distance between a and b
   in a tree with given root*/
   Node * findLCA(Node* root,int n1,int n2)
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
  Node *l = findLCA(root->left,n1,n2);
  Node *r = findLCA(root->right,n1,n2);
  
  // If both of the above calls return Non-NULL, then one key
  // is present in once subtree and other is present in other, 
  // So this node is the LCA 
  if (l and r)
    return root;

  // Otherwise check if left subtree or right subtree is LCA
  return (l!=NULL)?l:r;
}

//root to node distance function
int distFromRootToNode(Node *node, int val, int level)
{
    if(node==NULL)
        return -1;
    
    if(node->data == val)
        return level;
        
    //this level is returned to d if it is found
    
    int d = distFromRootToNode(node->left, val, level + 1);
    // if node is found in the left subtree
    if(d!=-1)
        return d;
        
    //when node is found in the right subtree of not found at all
    d = distFromRootToNode(node->right, val, level + 1);
    
    return d;
}


int findDist(Node* node, int a, int b) {
    //first find the lca
    //find the dist b/w lca to a
    //find the dist b/w lca to b
    //add them
    //node is the root in the first call
    if(node==NULL)
        return -1;
    Node *lca = findLCA(node, a, b);
    
    if(lca==NULL) // means when both or one of a and b are missing
        return -1;
    int d1= distFromRootToNode(lca, a, 0); // 0 is the level or dist
    int d2= distFromRootToNode(lca, b, 0);
    
    //return the sum
    return d1 + d2;
}

