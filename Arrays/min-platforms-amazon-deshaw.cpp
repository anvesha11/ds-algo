#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{   int n,i;
	    cin>>n;
	    int arr[n+1], dep[n+1];
	    multimap<int, char> order;
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    for(i=0;i<n;i++)
	    cin>>dep[i];
	    for(i=0;i<n;i++)
	    // Insert all the times (arr. and dep.) 
        // in the multimap. 
        // If its arrival then second value 
        // of pair is 'a' else 'd' 
        
	    order.insert(make_pair(arr[i], 'a'));
	    for(i=0;i<n;i++)
	    order.insert(make_pair(dep[i], 'd'));
	    int result = 0; 
        int plat_needed = 0; 
  
        multimap<int, char>::iterator it = order.begin(); 
        // Start iterating the multimap. 
	    for (; it != order.end(); it++)
	    {   // If its 'a' then add 1 to plat_needed 
            // else minus 1 from plat_needed.
	        if((*it).second == 'a')
	        plat_needed++;
	        else
            plat_needed--; 
  
            if (plat_needed > result) 
            result = plat_needed; 
	    }
	    cout<<result<<endl;
	    
	}
	return 0;
}