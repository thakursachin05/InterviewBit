int Solution::solve(string s) {
     int wc = 0;

    for (int i = 0; i < s.size(); i++) {

        if((i == 0 && s[i] !=  ' ') || (s[i] != ' ' && s[i - 1] == ' ')) {

            wc++;

        }

    }

    return wc;

}
