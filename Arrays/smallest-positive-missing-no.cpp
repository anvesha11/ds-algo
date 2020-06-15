// Function to find missing integer in array
// arr: input array
// n: size of array
int findMissing(int a[], int n) { 
    
    // Your code here
    sort(a,a+n);
    int b[1000001],j=0;
    //cout<<a[0]<<" "<<a[1];
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {  
            b[j]=a[i]; j++;}
    }
    int m=j;
    if(m==1)
    {
        if(b[0]>1 || b[0]==0)
        return 1;
        else if(b[0]==1)
        return 2;
    }
    
    for(int i=0;i<m;i++)
    {   
        if(b[0]>1)
         return 1;
        if(b[i+1]-b[i]>1)
        return b[i]+1;
    }
    return b[m-1]+1;
    
}

=================================================
	GEEKSFORGEEKS SOLUTION
	MEDIUM LEVEL PROBLEM
=================================================
/* Utility function that puts all non-positive (0 and negative) numbers on left 
side of arr[] and return count of such numbers */
int segregateArr (int arr[], int n) { 
	int j = 0, i; 
	for(i = 0; i < n; i++) { 
	    if(arr[i] <= 0) { 
	        swap(arr[i], arr[j]); 
	        j++; // increment count of non-positive integers 
		} 
	}
	return j; 
} 

int findMissingPositive(int arr[], int n) {
    // Mark arr[i] as visited by making arr[arr[i] - 1] negative. 
    // Note that 1 is subtracted because index start 
    // from 0 and positive numbers start from 1 
    for(int i=0; i<n; i++) {
	    if(abs(arr[i]) - 1 < n && arr[ abs(arr[i]) - 1] > 0) 
	    arr[ abs(arr[i]) - 1] = -arr[ abs(arr[i]) - 1]; 
    } 
    // Return the first index value at which is positive 
    for(int i=0; i<n; i++) 
        if (arr[i] > 0)// 1 is added because indexes start from 0 
	        return i+1; 

    return n+1; 
} 


int findMissing(int arr[], int n) { 
    // First separate positive and negative numbers 
    int shift = segregateArr(arr, n); 
    return findMissingPositive(arr+shift, n-shift); 
} 