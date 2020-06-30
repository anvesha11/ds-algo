bool findTriplets(int arr[], int n)
{  
  
    // sort array elements 
    sort(arr, arr+n); 
  
    for (int i=0; i<n-1; i++) 
    { 
        // initialize left and right 
        int l = i + 1; 
        int r = n - 1; 
        int x = arr[i]; 
        while (l < r) 
        { 
            if (x + arr[l] + arr[r] == 0) 
            { 
                // print elements if it's sum is zero 
                //printf("%d %d %d\n", x, arr[l], arr[r]); 
                return true; 
            } 
  
            // If sum of three elements is less 
            // than zero then increment in left 
            else if (x + arr[l] + arr[r] < 0) 
                l++; 
  
            // if sum is greater than zero than 
            // decrement in right side 
            else
                r--; 
        } 
    } 
    return false;
} 