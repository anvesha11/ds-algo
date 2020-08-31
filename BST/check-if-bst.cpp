Asked In: Accolite Adobe Amazon Boomerang Commerce FactSet Flipkart
Goldman Sachs GreyOrange Hike Linkedin MakeMyTrip MAQ Software
 Microsoft Ola Cabs OYO Rooms Qualcomm Samsung Snapdeal VMWare Walmart Wooker


void traverse(Node* root, int l, int r, bool &b)
{
    if(b==0 || root==NULL)
        return;
    if(root->data <l || root->data >r)
        b=0;
    traverse(root->left, l, root->data-1,b);
    traverse(root->right, root->data+1, r,b);
}

// return true if the given tree is a BST, else return false
bool isBST(Node* root) {
    bool b=1;
    traverse(root, INT_MIN, INT_MAX,b);
    return b;
}