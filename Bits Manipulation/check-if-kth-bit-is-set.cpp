bool checkKthBit(int n, int k){
    
    // Your code here
    // It can be a one liner logic!! Think of it!!
    if((1<<k)&n) 
        return true;
    else
        return false;
    
}