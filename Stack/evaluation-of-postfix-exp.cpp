// The main function that returns value of a given postfix expression
int evaluatePostfix(string &str)
{
    // Create a stack of capacity equal to expression size
    stack<int> s;
    // Scan all characters one by one
    for (int i = 0; i<str.size(); ++i)
    {
        // If the scanned character is an operand (number here),
        // push it to the stack.
        if (isdigit(str[i]))
            s.push(str[i] - '0');

        //  If the scanned character is an operator, pop two
        // elements from stack apply the operator
        else
        {
            int val1 = s.top(); s.pop();
            int val2 = s.top(); s.pop();
            switch (str[i])
            {
             case '+': s.push(val2 + val1); break;
             case '-': s.push(val2 - val1); break;
             case '*': s.push(val2 * val1); break;
             case '/': s.push(val2 / val1); break;
            }
        }
    }
    return s.top();
}