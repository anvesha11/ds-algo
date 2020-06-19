#include <bits/stdc++.h>
using namespace std;
void merge(int arr1[], int arr2[], int n, int m) 
{ 
    //Your code here
    //n is size of arr1
    //m is size of arr2
    while(arr1[n-1]>arr2[0])
    {
        swap(arr1[n-1],arr2[0]);
        sort(arr1,arr1+n);
        sort(arr2, arr2+m);
    }
} 
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int n,m;
          cin>>n>>m;
          int arr1[n], arr2[m];
          for(int i=0;i<n;i++)
          cin>>arr1[i];
          for(int i=0;i<m;i++)
          cin>>arr2[i];
     
     merge(arr1, arr2, n, m);
     for(int i=0;i<n;i++)
     cout<<arr1[i]<<" ";
     for(int i=0;i<m;i++)
     cout<<arr2[i]<<" ";
     cout<<endl;
}
}