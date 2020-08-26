Asked In: Amazon Microsoft Snapdeal


Node *createTree(int arr[], int n)
{
   
    //vector of nodes where left and right are initialised with NULL
    //this vector is inserted with 0,1,2,3,4...
    vector<Node*> vec;
    for(int i=0;i<n;i++)
    {
        Node *temp = new Node(i);
        vec.push_back(temp);
    }
    
    int root;
    //-1 is always root as root has no parent
    

// parent  -1 0 0 1 1 3 5
//            l r l r l l
// data     0 1 2 3 4 5 6       vec
    for(int i=0;i<n;i++)
    {
        if(arr[i]==-1)
            root=i;
        //if left node of parent is NULL 
        if(arr[i]!=-1 && vec[arr[i]]->left==NULL)
            vec[arr[i]]->left = vec[i];
            
        //if right node of parent is NULL
        else if(arr[i]!=-1 && vec[arr[i]]->right==NULL)
            vec[arr[i]]->right = vec[i];
    }
    //return the first node of vector
    return vec[root];
}