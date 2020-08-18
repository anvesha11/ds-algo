==========
sort when elements are at most k units away from their correct position
(easier when priority queue is used)
Asked in Amazon
==========

vector <int> nearlySorted(int arr[], int num, int K){
    vector <int> res;
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr+K); 
	// Making Minheap for first K element
	
	  for(int i = K; i<num; ++i){
	      // popping topmost and inserting one more
	        res.push_back (pq.top ());
	        pq.pop();
	        pq.push(arr[i]);
	    }
	    while(!pq.empty()){
	        // popping till heap becomes empty
	        res.push_back (pq.top ());
	        pq.pop();
	    }
	    return res;
}
