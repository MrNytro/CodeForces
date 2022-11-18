vector<int> Solution::plusOne(vector<int> &A) {
    vector<int>res;
    int carry=1;
    for(int i=A.size()-1;i>=0;i--){
        if(A[i]==9&&carry==1)
            res.push_back(0);
        else{
            res.push_back(A[i]+carry);
            carry=0;
        }
    }
    if(carry==1) 
        res.push_back(1);
    reverse(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
        if(res[i]==0) {res.erase(res.begin()); i--;}
        else break;
    }
    return res;
}

//                                      ::::HINT::::
// this is a good problem, for this we need to first reverse the vector and then perform the steps, with a carray of 1, if the last digit is 9 then we need to replace it wilth a 0 and if its not 9 then we need to just add one to it and make the carry as the 0, then ..... 