Asked In: Amazon Cisco FactSet Hike Snapdeal Walmart


//User function Template for C++
/*Structure of the node of the binary tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return a vector containing the zig zag level order traversal of the given tree


int height(struct Node *root)
{
    // base case
    if(root==NULL)
        return 0;

    // height of left subtree
    int l = 1+height(root->left);

    // height of right subtree
    int r=1+height(root->right);
    if(l>r)
        return l;
    else
        return r;

}

void spiral(struct Node *root,int level ,int flag, vector<int> &ans)
{
    // base case
   
    if(root==NULL)
        return;

    // 1st level
    if(level==1)
        ans.push_back(root->data);

        // when level is greater than 1
    else if(level>1)
    {
        // once go for left to right
        if(flag)
        {
            spiral(root->left,level-1,flag,ans);
            spiral(root->right,level-1,flag,ans);
        }
            // go from right to left
        else{
            spiral(root->right,level-1,flag,ans);
            spiral(root->left,level-1,flag,ans);
        }
    }
}

vector <int> zigZagTraversal(struct Node *root)
{
    vector<int> ans;
    // base case
    if(root==NULL)
        return ans;

    // calculate height of the tree
    int h = height(root);
    bool flag = true;

    // for each levels do the spiral traversal
    
    for(int i=1;i<=h;i++)
    {
        spiral(root,i,flag, ans);
        flag=!flag;
    }
    return ans;
}