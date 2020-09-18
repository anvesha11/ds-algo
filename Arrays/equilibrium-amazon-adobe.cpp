int equilibriumPoint(long long a[], int n) {
//
    // Your code here
    long long i, sum_left=0,sum_right=0;
    if(n==1)
    return 1;
    for(i=1;i<n;i++)
    sum_right+=a[i];
    //sum_right-=a[1];
    for(i=1;i<n;i++)
    {
        sum_left+=a[i-1];
        sum_right-=a[i];
        if(sum_left == sum_right)
            return i+1;
    }
    if(sum_right!=sum_left)
    return -1;
}
