int Solution::solve(int A, vector<int> &B) {
    int sum=0;
    for(int i=0;i<A;i++){
        sum+=B[i];
    }
    int ans=0;
    if(sum%3==0){
        int num1=sum/3;
        int num2=2*num1;
        sum=0;
        int count=0;
        for(int i=0;i<A-1;i++){
            sum+=B[i];
            if(sum==num2){
                ans+=count;
            }
            if(sum==num1){
                count++;
            }
        }
    }
    return ans;
}



/// divide it by 3 and thats how its done ezz