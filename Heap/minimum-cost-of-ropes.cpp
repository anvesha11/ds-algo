Asked in Amazon Goldmann Sachs

long long minCost(long long arr[], long long n) {
    // making Minheap
    priority_queue<long long, vector<long long>, greater<long long> > pq(
        arr, arr + n);

    long long res = 0;

    while (pq.size() > 1) {
        long long first = pq.top(); // storing first
        pq.pop();
        long long second = pq.top(); // storing second
        pq.pop();

        res += first + second;
        // push first and second back in priority queue
        pq.push(first + second);
    }

    return res;
}