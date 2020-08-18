Asked In: Amazon Citrix Flipkart Microsoft VMWare

struct compare{
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.first>=b.first;
    }
};

int *mergeKArrays(int arr[][N], int k)
{
//code here
int now[k],i;
//now array is used for taking loop through the whole individual row
//now goes from 0 to k-2 as the first one is already used
for(i=0;i<k;i++)
    now[i]=0;
int *res = new int [k*k];
priority_queue< pair < int,int >, vector< pair < int,int > >, compare > pq;

for(i=0;i<k;i++)
    pq.push(make_pair(arr[i][0], i));

int x; // element value stored in final array
int j=0;
int ar; // array index whose element is stored into final array 
        // position of i

for(i=0;i<k*k;i++)
{
    x=pq.top().first;
    ar=pq.top().second;
    pq.pop();
    res[j++]=x;
    
    if(now[ar]<k-1)
    {
        ++now[ar];
        pq.push(make_pair(arr[ar][now[ar]], ar));
        //ar is the position of i
    }
}
return res;


}