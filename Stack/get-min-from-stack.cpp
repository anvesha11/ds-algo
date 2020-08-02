Asked In: Amazon D-E-Shaw FactSet Flipkart Goldman Sachs GreyOrange Kuliza
 Microsoft One97 SAP Labs Sapient Snapdeal Walmart

int _stack :: getMin()
{
    if(s.empty())
        return -1;
    else
        return minEle;
}
int _stack ::pop()
{
    if(s.empty())
    {
        return -1;
    }
    int t = s.top();
    s.pop();
    if(t<minEle)
    {
      int k = minEle;
        minEle = 2*minEle-t;
        return k;

    }else
    return t;
}
void _stack::push(int x)
{
    if(s.empty())
    {
        minEle =x ;
        s.push(x);
        return ;
    }
    if(x<minEle)
    {
        s.push(2*x-minEle);
        minEle = x;
    }else
    s.push(x);
}