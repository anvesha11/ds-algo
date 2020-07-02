================
Asked in Amazon Adobe
================
vector<int> SortBinaryArray(vector<int> a)
{
    // Your code goes here 
    int n, i, zero=0, one=0;
    n=a.size();
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        zero++;
        else
        one++;
    }
    for(i=0;i<zero;i++)
    a[i]=0;
    for(i=zero;i<(zero+one);i++)
    a[i]=1;
    return a;
}