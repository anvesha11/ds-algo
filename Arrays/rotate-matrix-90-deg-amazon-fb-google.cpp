#include<bits/stdc++.h>
using namespace std;
int main()
 {
    ios_base::sync_with_stdio(false);//disconnect c with c++(false)
    cin.tie(NULL);
	int t,n,i,j,k;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int arr[n][n];
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        for(j=i;j<n;j++)
	        {
	            int temp=arr[i][j];
	            arr[i][j]=arr[j][i];
	            arr[j][i]=temp;
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        for(j=n-1;j>=0;j--)
	        {
	            cout<<arr[i][j]<<" ";
	        }
	    }
	    cout<<"\n";
	    
	}
	return 0;
}