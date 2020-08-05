queue<long long int> rev(queue<long long int> q)
{
    // add code here.
    stack<long long> s;
    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {   long long int temp=s.top();
        s.pop();
        q.push(temp);
    }
    return q;
}