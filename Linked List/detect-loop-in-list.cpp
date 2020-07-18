===============================================================
Asked In: Accolite Amazon D-E-Shaw Hike Lybrate
Mahindra Comviva MakeMyTrip MAQ Software OYO Rooms
Paytm Qualcomm Samsung SAP Labs Snapdeal Veritas VMWare Walmart
===============================================================

bool detectLoop(Node* head)
{
    // your code here
    Node *p=head;
    Node *q=head;
    //hare tortoise algo
    while(p && q && q->next)
    {
        p=p->next;
        q=q->next->next;
        if (p==q)
        return true;
    }
    return false;
}