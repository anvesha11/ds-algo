int countSubstrings(string s) {
        if(s.empty())
            return 0;
        int n = s.length();
        int i,j,count=0,row,col;
        bool matrix[n+1][n+1];
        //intialise the matrix with 0 first
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                matrix[i][j]=0;
        for(i=0;i<n;i++)
        {matrix[i][i]=1;
         count++;}
        //a substring is a palindrome when it's either one character long
        //or when it's 2 char long and both are same
        //or when it's >2 and first and last char are same AND middle part 
        //is also a palindrome
        
        //we go down till we encounter a one char string and ignore the lower left triangular matrix
        //start from 1 col because we've already assigned 0,0 as 1
        for(col=1;col<n;col++)
        {
            for(row=0;row<col;row++)
            {
                //when it's two char long and both are same
                if(row==col-1 && s[col] == s[row])
                {
                    matrix[row][col]=1;
                    count++;
                }
                //when length is >2 and if last and first char as same and middle part is also a palindrome.. for middle part check diagonal left below
                else if(matrix[row+1][col-1] == 1 && s[col]==s[row])
                {
                    matrix[row][col]=1;
                    count++;
                }
            }
        }
        return count;
        
        
    }