Asked In: Amazon Citrix MakeMyTrip Paytm VMWare

int lcs(int x, int y, string s1, string s2){
    
    int dp[1001][1001];

    for(int i=0;i<=x;i++)
    {
        for(int j=0;j<=y;j++)
        {
            if(i==0||j==0)
            dp[i][j]=0;                         // If i or j is 0, mark dp as 0 and continue
            else if (s1[i-1] == s2[j-1])        // If the char in both strings are equal
            dp[i][j] = dp[i-1][j-1] + 1;        // Add 1 to the output we got without including these both chars.
            else
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]); // If s1[i-1]!=s2[j-1], check the max output which comes from s1 or s2 without current char considering.
        }
    }
    return dp[x][y];   // Output the answer of dp[x][y]
}
