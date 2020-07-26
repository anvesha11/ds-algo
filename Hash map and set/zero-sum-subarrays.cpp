============================
Asked in: Amazon | Microsoft
============================

ll findSubarray(vector<ll> arr ,int n) {
    
     ll sum=0, counter=0; //variable sum=0
     unordered_map<ll,ll>mp;
    
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];  //sum stores prefix sum
            
            if(sum==0) //if prefix sum is zero that means we encounter a zero sum subarray
            {
                counter++; //hence we increment the counter
            }
            
            if(mp.count(sum)!=0) //If map contains the sum. This means we have previously seen the sum
            {
               counter+=mp[sum]; //add the value of sum to counter
            }
            
             mp[sum]++; //increment the key 
        }
       
       
       return counter ; // answer 
    
}