#include <iostream>
using namespace std;

bool isPalindrome(string str, int low, int high)
{
     //base condition

     if(low>=high)
          return true;
     //return false if mismatch occurs
     if(str[low]!=str[high])
          return false;
     //move to next palindrome
     return isPalindrome(str, low+1, high-1);
}

int main() {
	// your code goes here
	string str;
	cin>>str;
	int len = str.length();
	if(isPalindrome(str,0,len-1))
	     cout<<"Palindrome\n";
	else
	     cout<<"Not a palindrome\n";
	     
	return 0;
}

