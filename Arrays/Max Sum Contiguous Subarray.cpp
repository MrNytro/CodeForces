int Solution::maxSubArray(const vector<int> &A) {
    int sum=0,sum2=-9999;
    for(int i=0;i<A.size();i++){
        sum=sum+A[i];
        if(sum>sum2)
            sum2=sum;
        if(sum<=0)
            sum=0;
    }
    return sum2;
}

//                                                             ::::HINT::::
// what we learn from this is that its basically a dynimic programming question, we need to add the number and if the sum is greater than zero we will consider it, else we will stop the contigous array count and start again once its more , and we also need to update the max value at every instance