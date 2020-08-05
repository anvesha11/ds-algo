Asked in Amazon

queue<ll> modifyQueue(queue<ll> q, int k){
    stack<ll> s;            // To reverse k elements make a stack
    queue<ll> qq;           // New queue to store the results after modification
    while(k-->0){           // Pop the k numbers from queue and add it to stack.
            int a=q.front();
            q.pop();
            s.push(a);
        }
    while(!s.empty()){  // While stack is not empty add the elements to the new queue.
        int a=s.top();
        s.pop();
        qq.push(a);
    }
    while(!q.empty()){  // Add rest of the elements to the new queue
        int a=q.front();
        q.pop();
        qq.push(a);
    }
   return qq;           // Return the new queue.
}