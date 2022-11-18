int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int count=0;
    for(int i=0;i<A.size()-1;i++){
        int p=0,k=0;
        p=abs(A[i]-A[i+1]);
        k=abs(B[i]-B[i+1]);
        if(p>=k)
            count=count+p;
        else if(k>=p)
            count=count+k;
    }
    return count;
}



//                                                              ::::HINT::::
// what we learn from this
// 1. we need to go diagonal more because its better than going on up and then side
// 2. we need to find the | ... |of the two loactions and we can conculde the highest number as the total steps that its gonna take from that point on