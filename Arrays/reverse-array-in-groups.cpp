// Function to reverse the array in groups
vector<long long> reverseInGroups(vector<long long> mv, int n, int k){
    
    // your code here
    for(int i=0;i<n;i+=k)
    {
        long long int left=i;
        long long int right=min(n-1, i+k-1);
        while(left<right)
        swap(mv[left++],mv[right--]);
    }
    
}