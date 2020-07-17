Node* pairWiseSwap(Node* head)
{
Node* temp = head; 
  
    /* Traverse further only if  
    there are at-least two nodes left */
    while (temp != NULL && temp->next != NULL) { 
        /* Swap data of node with  
           its next node's data */
        swap(temp->data, 
             temp->next->data); 
  
        /* Move temp by 2 for the next pair */
        temp = temp->next->next; 
    } 
    return head;
}
