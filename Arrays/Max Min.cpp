int Solution::solve(vector<int> &A) {
    int max=0,min=9999,i,sum;
    for(i=0;i<A.size();i++)
    {
        if(A[i]>max)
            max=A[i];
        else if(A[i]<min)
            min=A[i];
    }
    sum=max+min;
    return sum;
}

// no need for hint, this was easy enough