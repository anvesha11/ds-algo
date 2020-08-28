Asked In: Microsoft

int minValue(Node* root)
{
    if(root==NULL)
        return -1;
    Node* current = root;
    // go left till node is not equal to NULL
    while(current->left!=NULL)
        current = current->left;
        
    return current->data;
}
