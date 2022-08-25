long Solution::solve(string A) {
    long sum = 0;
    long num  =  0;
    
    for(int i=0;i<A.size();i++){
        if(A[i]>='0' && A[i]<='9'){
           
                num = num*10 + (A[i]-'0');
            
        }
        else {
            sum += num;
            num = 0;
        }
    }
    sum += num;
    
    return sum;
}
