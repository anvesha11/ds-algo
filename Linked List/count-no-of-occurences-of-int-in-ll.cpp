/*
  Return the no. of times search_for value is there in a linked list.
  The input list will have at least one element  

  Node is defined as 
struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
}*head;
*/

int count(struct node* head, int search_for)
{
//add your code here
int x=0;
struct node* temp=head;
while(temp!=NULL)
{
    if(temp->data==search_for)
    x++;
    temp=temp->next;
}
return x;
}