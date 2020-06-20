#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        //int h[1000001]={0};
        for(int i=0;i<n;i++){
        cin>>a[i];
            //if(h[a[i]]>=0)
            //h[a[i]]++;
        }
        int k;
        cin>>k;
        sort(a,a+n);
        cout<<a[k-1]<<endl;
        // for(int i=0;i<n;i++){
        //     if(h[i]>=1)
        //     {k-=h[i];} //i+=(h[i]-1);}
        //     if(k==0){
        //     cout<<i<<endl;
        //     break;}
        // }
        
    
	//code

}
}