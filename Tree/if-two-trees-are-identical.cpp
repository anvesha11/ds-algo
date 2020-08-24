Asked In: Amazon Microsoft

bool isIdentical(Node *r1, Node *r2)
{
    // base condition when both reach the last node at the same time
    if(r1==NULL && r2==NULL)
    return 1;
    //when only one of them reaches the end
    if(r1==NULL || r2==NULL)
    return 0;
    
    
    //now recursively call the function comparing and returning 
    // if a data == b data and
    //call function with a left and b left and vice versa 
    //as equality is to be proved
    return (r1->data == r2->data && isIdentical(r1->right, r2->right) && isIdentical(r1->left, r2->left));
}