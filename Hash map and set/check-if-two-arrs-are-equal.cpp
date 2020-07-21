===========================
    Asked in Goldmann Sachs
=========================

bool check(vector<ll> arr, vector<ll> brr, int n) {
    //code here
    unordered_map<ll, ll> hash;
    for(int i=0;i<n;i++)
        hash[arr[i]]++;
    for(int i=0;i<n;i++)
    {
        if(hash.find(brr[i])==hash.end())
            return false;
        if(hash[brr[i]]==0)
        return false;
        
        hash[brr[i]]--;
    }
    return true;
        
}
