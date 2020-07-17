Node* reverse(Node *head) 
// this function reverses the linked list
{
    Node * prev = NULL;
    Node * current = head;
    Node * next;
    
    while (current != NULL) 
    { 
        next = current->next;     // storing next node
        current->next = prev;     // linking current node to previous
        prev = current;           // updating prev
        current = next;           // updating current
    }
    
    return prev; 
}

struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    first = reverse(first);              // reversing lists
    second = reverse(second);            // to simplify addition
    
    Node *sum=NULL;
    int carry=0;
    
    while( first!=NULL || second!=NULL || carry!=0 )
    {
        int newVal = carry;
        if(first) newVal += first->data;
        if(second) newVal += second->data;
        // newly value for sumList is sum of carry and respective
        // digits in the 2 lists
        
        carry = newVal/10;               // updating carry
        newVal = newVal%10;              // making sure newVal is <10
        
        Node* newNode = new Node(newVal);
        newNode->next = sum;             // appending newVal node
        sum = newNode;
        
        if(first) first = first->next;     // moving to next node
        if(second) second = second->next;
    }
    
    return sum;
}
