#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{   int maxDiff;  
    int i, j,n;  
  
    
  
	    cin>>n;
	    int *LMin = new int[(sizeof(int) * n)];  
    int *RMax = new int[(sizeof(int) * n)]; 
	    int a[n+1];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    
	    /* Construct LMin[] such that  
    LMin[i] stores the minimum value  
    from (arr[0], arr[1], ... arr[i]) */
    
	    LMin[0]=a[0];
	    for(i=1;i<n;i++)
	        LMin[i]=min(LMin[i-1],a[i]);
	        
	   /* Construct RMax[] such that  
    RMax[j] stores the maximum value from  
    (arr[j], arr[j+1], ..arr[n-1]) */
    
	    RMax[n-1]=a[n-1];
	    for(i=n-2;i>=0;i--)
	        RMax[i]=max(RMax[i+1],a[i]);
	        
	   /* Traverse both arrays from left to right 
    to find optimum j - i. This process is similar to  
    merge() of MergeSort */
	    i=0,j=0;
	    int MaxDiff=-1;
	    while(j<n & i<n)
	    {
	       if(LMin[i]<=RMax[j])
	       {
	       MaxDiff=max(MaxDiff,j-i);
	       j++;
	       }
	       else
	       i++;
	    }
	    cout<<MaxDiff<<endl;
	}
	
}