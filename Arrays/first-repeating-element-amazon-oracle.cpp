int firstRepeated(int a[], int n) {
    //code here
    for(int i=0;i<n;i++)
        {for(int j=i+1;j<n;j++)
            {if(a[i]==a[j])
                return i+1;}
        }
        return -1;
}
