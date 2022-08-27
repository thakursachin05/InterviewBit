int Solution::solve(vector<string> &A) {
    vector<int> v(26,0);
    
    for(auto x : A){
        for(auto y : x){
            v[y-'a']++;
        }
    }
    
    for(int i=0;i<26;i++){
        if(v[i]==0) return 0;
    }
    return 1;
}
