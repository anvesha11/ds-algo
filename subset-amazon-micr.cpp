#include <iostream>
using namespace std;
void printArray(int arr[], int n){
     cout<<"{";
     for(int i=0;i<n;i++)
          cout<<arr[i]<<" ";
     cout<<"}\n";
}

void printAllSS(int* arr, int n, int ci, int* ss, int cssi){
     if(ci>=n)
     {
          printArray(ss,cssi);
          return;
     }
     //not adding the first element in the output
     printAllSS(arr,n,ci+1,ss,cssi);
     //storing output inside subsequence ss array
     ss[cssi]=arr[ci];
     //adding the first element in the output
     printAllSS(arr,n,ci+1,ss,cssi+1);
}
int main(){
     int arr[]={1,2,3};
     int n=3;
     int ssa[4];
     printAllSS(arr,n,0,ssa,0);
     cout<<"\n";
}