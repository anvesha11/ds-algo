Asked In: Amazon Cadence India Directi MakeMyTrip Microsoft Oracle
 OYO Rooms Philips PropTiger Salesforce Snapdeal VMWare

int height(Node* p)
{   int h;
    if(p==NULL)
    return 0;
    
    int left = height(p->left);
    int right = height(p->right);
    
    if(left>right)
        h=1+left;
    else
        h=1+right;
        
    return h;
}
int diameter(Node* p) {
    // Your code here
    if(p==NULL)
        return 0;
    int lheight = height(p->left);
    int rheight = height(p->right);
    
    int ldiameter = diameter(p->left);
    int rdiameter = diameter(p->right);
    
    int fd = max(lheight + rheight + 1, max(ldiameter, rdiameter));
    return fd;
    
    
    
}
