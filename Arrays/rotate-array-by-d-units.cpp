void rotateArr(int arr[], int d, int n){
    
   // Your code here
  int low=0, high=d-1;
  while(low<=high)
  {
      swap(arr[low],arr[high]);
      low++;
      high--;
  }
  low=d;
  high=n-1;
  while(low<=high)
  {
      swap(arr[low],arr[high]);
      low++;
      high--;
  }
  low=0;
  high=n-1;
  while(low<=high)
  {
      swap(arr[low],arr[high]);
      low++;
      high--;
  }
    
}