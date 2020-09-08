long long numberOfWays(int arr[],int n,int sum)
{
    //n is the number of coins and sum is the value we're targetting
    //this is kinda like the 0-1 knapsack problem
    //we take both possibilities (consider the coin or not)
    //not considering the coin we take the cell above it
    //considering it, we take the cell in the same row but some
    //previous column (that previous column would be decided by subtracting the  just previous coin in the array from the current coin ie j
    // this is due to the consideration of already spending that coin)
    int t[n+1][sum+1];
    for(int i=0;i<=n;i++)
        t[i][0]=1;
    for(int i=1;i<=sum;i++)
        t[0][i]=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=sum;j++)
        {
            if(j<arr[i-1])
                t[i][j]=t[i-1][j];
            else
                t[i][j]=t[i-1][j] + t[i][j-arr[i-1]];
        }
        return t[n][sum];
}