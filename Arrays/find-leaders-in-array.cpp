vector<int> leaders(int a[], int n){
    vector<int> ans;
    if(n==0)
    { ans.push_back(0); return ans;}
    else if(n==1)
   {ans.push_back(a[0]); return ans;}
    
    else
    {
       ans.push_back(a[n-1]);
        int curr=a[n-1]; 
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>=curr)
                {curr = a[i];
                ans.push_back(a[i]);
                }
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
     
    
}