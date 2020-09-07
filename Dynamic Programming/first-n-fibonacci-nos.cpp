Asked In: Accenture Infosys TCS Wipro

vector<long long> printFibb(int n) {
    long long a=1, b=1;
    vector <long long> ans;
    //long long curr;
    if(n>=1)
        ans.push_back(1);
    if(n>=2)
        ans.push_back(1);
    for(int i=2;i<n;i++)
    {
        ans.push_back(a+b);
        long long c=a+b;
        a=b;
        b=c;
        
        //ans.push_back[ans[i]];
    }
    return ans;
}  