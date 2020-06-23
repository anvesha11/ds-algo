bool isAnagram(string c, string d){
    
    // Your code here
    int i;
    int n=c.length();
    int m=d.length();
    if(n!=m)
        return false;
    int hash[27]={0};
    for(i=0;i<n;i++)
    {
        hash[c[i]-'a']++;
    }
    for(i=0;i<n;i++)
        hash[d[i]-'a']--;
    for(i=0;i<27;i++)
        {if(hash[i]!=0)
        return false;}
    return true;
        
    
}