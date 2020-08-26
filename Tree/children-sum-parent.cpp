/*Complete the function below

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

// Return 1 if all the nodes in the tree satisfy the given property. Else return 0
int isSumProperty(Node *root)
{   //base condition
 if(root==NULL || (root->left == NULL && root->right == NULL))
    return 1;
 int leftData =0;
 int rightData=0;
 //if only one of the children is NULL
 if(root->left!=NULL)
    leftData = root->left->data;
 if(root->right!=NULL)
    rightData = root->right->data;
 return ((root->data == leftData + rightData) && (isSumProperty(root->left)) && (isSumProperty(root->right)));
}