struct node* tail(struct node *head){
    node *current = head;
    while(current->next != NULL) current = current->next;
    return current;
}

void swap_value(struct node * first, struct node * second){
    int temp = first->data;
    first->data = second->data;
    second->data = temp;
}

struct node * partition(struct node *head, struct node *tail){
    node * i=head, *j=head->next;
    node *pivot = head;
    while(j != tail->next){
        if(j->data < pivot->data){
            swap_value(i->next,j);
            i = i->next;
        }
        j = j->next;
    }

    swap_value(pivot,i);
    return i;
}

void quickSortRec(struct node * head, struct node *tail){
    if(head == tail) return;
    if(tail == NULL or head == NULL) return;

    struct node * pivot = partition(head , tail);

    quickSortRec(head, pivot);
    quickSortRec(pivot->next, tail);
}

void quickSort(struct node **headRef) {
    quickSortRec(*headRef, tail(*headRef));
}