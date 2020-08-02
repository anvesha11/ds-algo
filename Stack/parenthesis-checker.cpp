Asked In: Adobe Amazon Flipkart Oracle OYO Rooms Snapdeal Walmart Yatra.com

bool ispar(string x)
{
    // Your code here
    stack<char> st;
    int i=0;
    while(x[i]!='\0')
    {
        if(x[i]=='{' || x[i]=='(' || x[i]=='[')
            st.push(x[i]);
        else if((!st.empty()) && ((st.top()=='{' && x[i]=='}') || (st.top()=='(' && x[i]==')') || (st.top()=='[' && x[i]==']')))
            st.pop();
        else
            return false;
        i++;
    }
    if(st.empty())
    return true;
    else 
    return false;
   
}