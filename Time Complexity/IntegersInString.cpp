vector<int> Solution::solve(string A) {
    vector<int> ans;
    int num = 0;
    for(auto x : A){
        if(x!=','){
            num = num*10 + x-'0';
        }
        else{
            ans.push_back(num);
            num = 0;
        }
    }
    ans.push_back(num);
    return ans;
}
