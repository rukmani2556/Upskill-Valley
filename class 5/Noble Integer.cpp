int Solution::solve(vector<int> &A) {
    int n=A.size();
    sort(A.begin(),A.end());
   
    for(int i=1;i<A.size();i++)
    {  
        if(A[i]!=A[i-1])
        {
            if(A[i-1]==(n-i))
            return 1;
        }
    }
    if(A[n-1]==0)
    return 1;
    return -1;
}
