#include <iostream>
#include <algorithm>
using namespace std;

void reversee(string &str, int low, int high)
{
     //string elements reversal
     if(low<high){
     swap(str[low],str[high]);
     //move to next pair
     reversee(str, low+1, high-1);}
}

int main() {
	// your code goes here
	string str;
	cin>>str;
	int len = str.length();
	reversee(str,0,len-1);
	cout<<str;
	    
	     
	return 0;
}

