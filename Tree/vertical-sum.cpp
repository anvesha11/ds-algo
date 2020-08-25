Asked In: Amazon

/*Complete the function below
Node is as follows:
struct Node{
int data;
Node *left,*right;
};
*/

void verticalSumUtil(Node *node, int hd, map<int, int> &Map)
{
    if(node==NULL)
    return;
    
    //recur for left subtree first (inorder traversal)
    verticalSumUtil(node->left, hd-1, Map);
    
    //store the values in the map using hash method
    Map[hd]+=node->data;
    
    //recur for tight subtree now
    verticalSumUtil(node->right, hd+1, Map);
    
}
vector <int> verticalSum(Node *root) {
    vector<int> ans;
    map<int, int> Map;
    
    //populate the map
    verticalSumUtil(root, 0, Map);
    
    //store the map values (sums) inside the ans vector
    //for that initialise an iterator for traversing the map
    map<int, int> :: iterator it;
    for(it=Map.begin(); it!=Map.end(); ++it)
        ans.push_back(it->second);
        
    return ans;
}