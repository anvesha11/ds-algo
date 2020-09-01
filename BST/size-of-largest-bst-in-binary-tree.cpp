Asked In: Amazon D-E-Shaw Samsung
As the normal approach of inorder will take O(n2) time, so use postorder which does bottom up traversal.
In this we make a new struct node which has 4 objects, this will be easier than passing them as parameters, either can be done though
if left and right both are bst then update x's objects accordingly as shown.

struct node1{
    int isbst;
    int size;
    int mn;
    int mx;
};

struct node1 bst(struct Node *root)
{   
    struct node1 x;
    if(root==NULL)
    {
       x.isbst = 1;
       x.size =0;
       x.mn=1000000;
       x.mx=0;
       return x;
    }
    
    struct node1 left = bst(root->left);
    struct node1 right = bst(root->right);
    
    if(root->data > left.mx && root->data < right.mn && left.isbst==1 && right.isbst==1)
    {
        x.isbst=1;
        x.size=1+left.size+right.size;
        x.mn=min(root->data,left.mn);
        x.mx=max(root->data, right.mx);
    }
    else
    {
        x.isbst=0;
        x.size=max(left.size,right.size);
        x.mn=1000000;
        x.mx=0;
    }
    return x;
    
    
};

/*You are required to complete this method */
// Return the size of the largest sub-tree which is also a BST
int largestBst(Node *root)
{
	return bst(root).size;
}