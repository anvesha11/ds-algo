int getLength(Node * head)
{
    Node *temp=head;
    
    int count=0;
    while(temp->next!=head)
    {
        count++;
        temp=temp->next;
    }
    return count+1;
}

Node * deleteHead(Node *head)
{
    Node * curr=head;
    while(curr->next!=head)
    {
        curr=curr->next;
    }
    
    Node * temp=head;
    head=head->next;
    temp->next=NULL;
    
    curr->next=head;
    
    delete temp;
    
    
    return head;
    
    
}
Node * deleteTail(Node * head)
{
    Node * temp=head;
    Node * prev=head;
    while(temp->next!=head)
    {
        prev=temp;
        temp=temp->next;
    }
    
    prev->next=head;
    temp->next=NULL;
    
    delete temp;
    
    return head;
    
    
}



Node * deleteAtPosition(Node *head,int pos)
{
    

    if(pos==1)
    {
        return deleteHead(head);
    }
    if(pos==getLength(head))
    {
        return deleteTail(head);
    }
    
    Node * curr=head;
    Node * prev=head;
    int count=1;
    
    while(count<pos)
    {
        count++;
        prev=curr;
        curr=curr->next;
        
    }
    
    Node * next=curr->next;
    curr->next=NULL;
    prev->next=next;
    
    delete curr;
    
    return head;
    
    
}