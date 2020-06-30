===============================================
Asked In: Accenture Cognizant Infosys Linkedin Oracle Qualcomm TCS Wipro
===============================================

int bin_search(int arr[], int left, int right, int k)
{

while(left<=right)
{
   int mid=(left+right)/2;
   if(k>arr[mid])
   {
       left=mid+1;
   }
   else if(k<arr[mid])
    right=mid-1;
    else
    return mid;
}
return -1;
}