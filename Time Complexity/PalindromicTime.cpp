int Solution::solve(string A) {
    int hh = (A[0]-'0')*10 + (A[1]-'0');
    int mm = (A[3]-'0')*10 + (A[4]-'0');
    assert(0<=hh && hh<24);
    assert(0<=mm && mm<60);
    assert(A[2]==':');
    int ans = 0;
    while(hh/10 != mm%10 || hh%10 != mm/10){
        mm++;
        ans++;
        if(mm == 60){
            mm = 0;
            hh++;
        }
        if(hh == 24){
            hh = 0;
        }
    }
    return ans;
}