long Solution::solve(int A, int B) {
    long next = 0;
    long prev = A;

    for(int i=1;i<B;i++){
        if(prev%2==0) next = prev/2;
        else next = prev*3 + 1;
        
        prev = next;
    }
    return next;
}
