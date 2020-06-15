int maxSubarraySum(int a[], int n){
    
    // Your code here
    long long max_so_far=0, max_ending_here=0,i,flag=0;
    for(i=0;i<n;i++)
    {
        max_ending_here+=a[i];
        if(max_ending_here<0)
            max_ending_here=0;
        if(max_so_far<max_ending_here)
            {max_so_far=max_ending_here;
            flag=1;
    }
    }
    if(max_so_far==0)
    return 0;
    if(flag==1)
    return max_so_far;
    else
    return -1;
    
}