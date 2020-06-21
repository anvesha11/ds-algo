=========================================
company - amazon, accolite, deshaw, directi, fb, microsoft, oracle, paytm, samsung, sap labs, swiggy, walmart, flipkart
=========================================

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{   int n,i;
	    cin>>n;
	    int a[n+1];
	    for(i=0;i<n;i++)
	        cin>>a[i];
	    int buy=0,sell=0;
	    i=0;
	    while(i<n-1)
	    {
	        // Find Local Minima. Note that the limit is (n-2) as we are
            // comparing present element to the next element. 
	        while(i<n-1 & a[i]>=a[i+1])
	        i++;
	        //reached the end
	        if(i==n-1)
	        break;
	        buy=i++;
	        // Find Local Maxima.  Note that the limit is (n-1) as we are
            // comparing to previous element
	        while(i<n & a[i]>=a[i-1])
	        i++;
	        sell=i-1;
	        cout<<"("<<buy<<" "<<sell<<")"<<" ";
	        
	    }
	    if(buy ==0 & sell == 0)
	    cout<<"No Profit";
	    cout<<endl;
	    
	}
	return 0;
}