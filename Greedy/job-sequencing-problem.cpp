Asked in Accolite


bool comparison(Job a, Job b) 
{ 
	return (a.profit > b.profit); 
} 

// Prints minimum number of platforms reqquired 
pair<int,int> JobScheduling(Job arr[], int n) 
{ 
    int res = 0, count = 0;
    
	// Sort all jobs according to decreasing order of prfit 
	sort(arr, arr+n, comparison); 

	int result[n]; // To store result (Sequence of jobs) 
	bool slot[n]; // To keep track of free time slots 

	// Initialize all slots to be free 
	for (int i=0; i<n; i++) 
		slot[i] = false; 

	// Iterate through all given jobs 
	for (int i=0; i<n; i++) 
	{ 
	// Find a free slot for this job (Note that we start 
	// from the last possible slot) 
	for (int j=min(n, arr[i].dead)-1; j>=0; j--) 
	{ 
		// Free slot found 
		if (slot[j]==false) 
		{ 
			result[j] = i; // Add this job to result 
			slot[j] = true; // Make this slot occupied 
			break; 
		} 
	} 
	} 

	// Print the result 
	for (int i=0; i<n; i++) 
	if (slot[i]) {
	    count++;
	    res += arr[result[i]].profit;
	}
	return {count,res};
}