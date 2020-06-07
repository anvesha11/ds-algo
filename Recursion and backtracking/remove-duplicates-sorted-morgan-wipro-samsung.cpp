int remove_duplicate(int arr[],int n)
{
//Your code here
if(n==0 || n==1)
    return n;
int j=0;
int temp[n];
for(int i=0;i<n-1;i++)
{
    if(arr[i]!=arr[i+1])
        temp[j++]=arr[i];
}
temp[j++]=arr[n-1];
for(int i=0;i<n;i++)
arr[i]=temp[i];
return j;
}