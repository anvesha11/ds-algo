Asked in Amazon Flipkart

vector <long long int> nextLargerElement(long long arr[], int n){
    stack <long long int> s;
    vector <long long int> res (n);
    
    for (int i = n-1; i >= 0; i--)
    {
        while (!s.empty () and s.top () <= arr[i])
            s.pop ();
            
        if (s.empty ())
            res[i] = -1;
        else 
            res[i] = s.top ();
            
        s.push (arr[i]);
    }
    return res;
}