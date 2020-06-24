=========================================
Asked In: Accolite Adobe Amazon Cisco Goldman Sachs MakeMyTrip Microsoft Paytm Samsung SAP Labs
=========================================

/*Function to reverse any sequence starting with pointer
  begin and ending with pointer end  */
void reverse(char *begin, char *end) {
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}


/*Function to reverse words*/
void reverseWords(char *s) {
    
    // storing the given string s in 
    // word_begin and temp to use it further
    // for different uses
    char *word_begin = s;
    char *temp = s; /* temp is for word boundry */

    // loop iterating through string
    while (*temp) {
        temp++;
        
        // if, current character is not null,
        // then call reverse till this
        if (*temp == '\0') {
            reverse(word_begin, temp - 1);
        } 
        // If current character is dot, then
        // also reverse the word, but jump the
        // wordbegin pointer to current

        else if (*temp == '.') {
            reverse(word_begin, temp - 1);
            word_begin = temp + 1;
        }
    }

    reverse(s, temp - 1);
    cout<<s;
}


==========================================
when string is passed (using builtin functions)

// CPP program to reverse a string 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to reverse words*/ 
void reverseWords(string& s) 
{ 
    // Reversing individual words as 
    // explained in the first step 
  
    int start = 0; 
    for (int end = 0; end < s.length(); end++) { 
  
        // If we see a space, we reverse the previous  
        // word (word between the indexes start and end-1 
        // i.e., s[start..end-1] 
        if (s[end] == ' ') { 
            reverse(s.begin() + start, s.begin() + end); 
            start = end + 1; 
        } 
    } 
  
    // Reverse the last word 
    reverse(s.begin() + start, s.end()); 
  
    // Reverse the entire string 
    reverse(s.begin(), s.end()); 
} 

