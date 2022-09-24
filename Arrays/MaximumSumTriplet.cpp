// https://www.interviewbit.com/problems/maximum-sum-triplet/
// Maximum Sum Triplet


int Solution::solve(vector<int> &A) {
    int n = A.size();
    vector<int> suffMax(n,-1);

    suffMax[n-1]= A[n-1];
  
    
    for(int i=n-2;i>=0;i--){
        suffMax[i] = max(suffMax[i+1],A[i]);
    }
    int maxAns = 0;
    set<int> s;
    s.insert(A[0]);
    for(int i=1;i<n-1;i++){
        auto it = s.lower_bound(A[i]);
        if(it== s.begin() || A[i]>=suffMax[i+1]){
            s.insert(A[i]);
            continue;
        }
        it--;
        int res = A[i]+(*it)+suffMax[i+1];
        maxAns = max(maxAns,res);
        s.insert(A[i]);        
    }
    return maxAns;
}
