Asked in Google

string preorder(Node *root, unordered_map<string, int> &mp)
{   
    string s;
    if(root==NULL)
    {
        s+="$";
        return s;
    }
    
    //reinitisliase s
    s+= root->data;
    s+= preorder(root->right, mp);
    s+= preorder(root->left, mp);
    mp[s]++;
    return s;
}
/*This function returns true if the tree contains 
a duplicate subtree of size 2 or more else returns false*/
bool dupSub(Node *root)
{
    unordered_map<string, int> mp;
    preorder(root, mp);
    
    //if the count in map is more than two
    //means if duplicates are present and the length of the duplicates
    //more than 3 as we dont count leaf nodes B$$ is not counted
    //return true
    for(auto i:mp)
        if(i.second>=2 && i.first.length() > 3)
            return true;
            
    return false;
}