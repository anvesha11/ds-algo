bool areRotations(string str1, string str2){
   if(str1.length() != str2.length())
      return false;
   string con_str = str1 + str1;
   if(con_str.find(str2) != string::npos){
      return true;
   } else {
      return false;
   }
}