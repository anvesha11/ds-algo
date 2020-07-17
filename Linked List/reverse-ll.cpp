/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

// Should reverse list and return new head.
struct Node* reverseList(struct Node *head)
{
    // code here
    // return head of reversed list
    Node* current=head;
    Node* prev=NULL, *next=NULL;
    while(current!=NULL)
    {
        //store next
        next=current->next;
        //reverse current node's prev
        current->next=prev;
        //move pointers one position ahead
        prev=current;
        current=next;
    }
    head=prev;
    return head;
}
