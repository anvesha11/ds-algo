Asked In: Amazon FactSet Goldman Sachs Paytm

void convertToWave(int *a, int n){
    
    if(n%2 == 0)
    for(int i=0;i<n-1;i+=2)
    {
        swap(a[i], a[i+1]);
    }
    else
    for(int i=0;i<n-2;i+=2)
        swap(a[i],a[i+1]);
    
}