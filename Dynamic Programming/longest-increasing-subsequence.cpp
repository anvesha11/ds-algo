Asked In: Amazon BankBazaar OYO Rooms Paytm Samsung

int longestSubsequence(int n, int a[])
{
   int i,j;
   vector<int> t(n,1);
   //intitialise the new array as 1 because a single element is a LIS by itself
   
   
   //now we iterate from o to <i for j. and if a[j]<a[i] then decide whether
   //to include the subsequences including a[j] or not. whatever length is
   //greater we take that
   //if j is taken then add one to it as we're dealing with i as well atm
    for(i=0;i<n;i++)
        for(j=0;j<i;j++)
            if(a[j]<a[i])
            t[i]=max(t[i], t[j]+1);
            
    return *max_element(t.begin(),t.end());
    
}
