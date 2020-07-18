==================
Asked In: Amazon Flipkart Microsoft
==================



struct Node* deleteMid(struct Node* head) 
{ 
    // Base cases 
    if (head == NULL) 
        return NULL; 
    if (head->next == NULL) { 
        delete head; 
        return NULL; 
    } 
  
    // Initialize slow and fast pointers 
    // to reach middle of linked list 
    struct Node* slow_ptr = head; 
    struct Node* fast_ptr = head; 
  
    // Find the middle and previous of middle. 
// To store previous of slow_ptr     
struct Node* prev;  
    while (fast_ptr != NULL  
&& fast_ptr->next != NULL) { 
        fast_ptr = fast_ptr->next->next; 
        prev = slow_ptr; 
        slow_ptr = slow_ptr->next; 
    } 
  
    // Delete the middle node 
    prev->next = slow_ptr->next; 
    delete slow_ptr; 
  
    return head; 
} 