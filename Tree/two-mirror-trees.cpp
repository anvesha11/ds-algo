Asked In: Amazon D-E-Shaw Hike

int areMirror(Node* a, Node* b) {
    // base condition when both reach the last node at the same time
    if(a==NULL && b==NULL)
    return true;
    //when only one of them reaches the end
    if(a==NULL || b==NULL)
    return false;
    
    //now recursively call the function comparing and returning 
    // if a data == b data and
    //call function with a left and b right and vice versa 
    //as mirror is to be proved
    
    return a->data==b->data && areMirror(a->right, b->left) && areMirror(a->left, b->right);
    
    
}
