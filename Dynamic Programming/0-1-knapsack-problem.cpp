Asked In: Amazon Directi Flipkart GreyOrange Microsoft Mobicip Morgan Stanley Oracle Payu Snapdeal Visa

// Returns the maximum value that  
// can be put in a knapsack of capacity W 
// Returns the maximum value that  
// can be put in a knapsack of capacity W 
int knapSack(int W, int wt[], int val[], int n) 
{ 
   int i, w; 
   int K[n+1][W+1]; 
  
   // Build table K[][] in bottom up manner 
   for (i = 0; i <= n; i++) 
   { 
       for (w = 0; w <= W; w++) 
       { 
           // Base Case  
           if (i==0 || w==0) 
               K[i][w] = 0;
            // If weight of the nth item is more  
            // than Knapsack capacity W, then  
            // this item cannot be included 
            // in the optimal solution  
           else if (wt[i-1] <= w) 
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]); 
            // Return the maximum of two cases:  
            // (1) nth item included  
            // (2) not included  
           else
                 K[i][w] = K[i-1][w]; 
       } 
   } 
  
   return K[n][W]; 
}