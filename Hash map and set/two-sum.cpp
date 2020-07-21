=============================================
Asked In: Accolite Amazon CarWale FactSet
Flipkart Google Hike Microsoft Morgan Stanley SAP Labs Wipro Zoho
=============================================

bool keypair(vector<int> a, int N, int X)
{
    // Your code goes here
    unordered_set<int> s;
    for(int i=0;i<N;i++)
    {
        int temp=X-a[i];
        if(s.find(temp)==s.end())
            s.insert(a[i]);
        else
        return true;
    }
    return false;
    
}
