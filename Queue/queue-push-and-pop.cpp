queue<int>_push(int arr[],int n)
{
   //return a queue with all elements of arr inserted in it
   queue<int> nums;
   for(int i=0;i<n;i++)
    nums.push(arr[i]);
   return nums;
   
}

void _pop(queue<int>s)
{
    //print front and dequeue for each element until it becomes empty
    while(!s.empty())
    {
        cout<<s.front()<<" ";
        s.pop();
    }
} 