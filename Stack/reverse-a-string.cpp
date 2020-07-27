void reverse(char *str, int len)
{
stack<char> s;
for(int i=0;i<len;i++)
    s.push(str[i]);
int j=0;
while(!s.empty())
{
    str[j]=s.top();
    s.pop();
    j++;
}
}