#include <iostream> 
using namespace std; 
void permute(string &str, int l, int r)
{
     if(l==r)
     cout<<str<<endl;
     else{
          for(int i=l;i<=r;i++){
               swap(str[l],str[r]);
               permute(str, l+1, r);
               swap(str[l],str[r]);
          }
     }
}
int main(){
     string str = "ABC";
     permute(str,0,str,length()-1);
     return 0;
}
//How do we get permutations in lexicographically sorted order?
// We can put all permutations in an array instead of printing them 
// immediately. Then we can sort the array and print the array.