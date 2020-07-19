
Node* partition(Node *l, Node *h)
{
int pivot= h->data;
Node * i=l;

for(Node * j=l;j!=h;j=j->next)
{
if(j->data<=pivot)
{
swap(&(i->data), &(j->data));
i=i->next;
}
}
swap(&(i->data),&(h->data));
return i;
}