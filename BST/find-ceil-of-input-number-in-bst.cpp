
Asked in Samsung

int findCeil(Node* root, int input) 
{ 
    // Base case 
    if (root == NULL) 
        return -1; 
        
    if(root->data == input)
        return root->data;
    if(root->data < input)
        return findCeil(root->right, input);
    
    
    //now either the ceil is in the left subtree or it's the root data 
    int cceil = findCeil(root->left, input);
    return ((cceil >= input) ? cceil: root->data);
  
    // Your code here
    
    
} 