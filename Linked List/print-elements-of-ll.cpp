void display(struct Node *head)
{
//add code here
while(head!=NULL)
{
printf("%d ",head->data);
head=head->next;
}