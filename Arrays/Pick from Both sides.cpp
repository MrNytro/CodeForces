int Solution::solve(vector<int> &A, int B) {
    int sumArr=0;
    for(int i=0;i<A.size();i++){
        sumArr=sumArr+A[i];
    }
    int k=A.size()-B;
    int min=0;
    for(int i=0;i<k;i++){
        min=min+A[i];
    }
    for(int j=0;j<=B;j++){
        int sum1=0;
        for(int l=j;l<k+j;l++){
            sum1=sum1+A[l];
        }
        if(sum1<min)
            min=sum1;
    }
    return (sumArr-min);
}


//                                                           ::::HINT::::
// what we learned from this is 
//if we need to take from both sides that means we need to choose the smallest array from the centre that is contigous