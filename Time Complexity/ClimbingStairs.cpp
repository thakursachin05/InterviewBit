int Solution::solve(vector<int> &A) {
    int n = A.size();
   
    A[1] += A[0];
    for(int i=2;i<n;i++){
       
        A[i] = min(A[i-2],A[i-1])+A[i];
    }
  
    
    return A[n-1];
}
