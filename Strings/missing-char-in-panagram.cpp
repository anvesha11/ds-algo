string missingPanagram(string str){

 /// A boolean array to store characters 
    // present in string. 
    bool present[26] = {false}; 
  
    // Traverse string and mark characters 
    // present in string. 
    for (int i=0; i<str.length(); i++) 
    { 
        if (str[i] >= 'a' && str[i] <= 'z') 
            present[str[i]-'a'] = true; 
        else if (str[i] >= 'A' && str[i] <= 'Z') 
            present[str[i]-'A'] = true; 
    } 
  
    // Store missing characters in alphabetic 
    // order. 
    string res = ""; 
    for (int i=0; i<26; i++) 
        if (present[i] == false) 
            res.push_back((char)(i+'a')); 
  
    return res; 
}