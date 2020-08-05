void MyQueue :: push(int x)
{
        // Your Code
        arr[rear++]=x;
}

/*The method pop which return the element 
  poped out of the queue*/
int MyQueue :: pop()
{
        // Your Code   
        if(rear==front)
        return -1;
        else
        {
            int x=arr[front++];
            return x;
        }
}