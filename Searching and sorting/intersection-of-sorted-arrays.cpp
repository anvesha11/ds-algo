vector<int> printIntersection(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0; 
    int flag=0;
    vector<int> ans;
    while (i < n && j < m) 
    { 
        while(  i+1<n  &&  arr1[i]==arr1[i+1]  )
            i++;
            // avoiding identical elements in arr1
        
        while(  j+1<m  &&  arr2[j]==arr2[j+1]  )
            j++;
            // avoiding identical elements in arr2
      
        if (arr1[i] < arr2[j]) 
            i++;
      
        else if (arr2[j] < arr1[i]) 
            j++;
      
        else
        {
            ans.push_back(arr2[j++]);
            //cout << arr2[j++] << " "; 
            i++;
            flag=1;
            // if arr1[i] is same as arr2[j], number is
            // printed once and i and j are incremented
        }
    } 
    if(flag==1)
return ans;
else
{ans.push_back(-1);
return ans;}
}
