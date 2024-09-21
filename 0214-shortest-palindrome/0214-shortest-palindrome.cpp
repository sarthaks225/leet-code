class Solution {
public:
    void computeLPS(string pattern, vector<int> &lps) {
        int len = 0;
        int i = 1;
        lps[0] = 0;

        while (i < pattern.size()) {
            if (pattern[i] == pattern[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }                   
        }
    }

    string shortestPalindrome(string s) {
        if (s.empty()) return s;

        string rev = s;
        reverse(rev.begin(), rev.end());
        string pattern = s + '#' + rev;

        vector<int> lps(pattern.size(), 0);
        computeLPS(pattern, lps);

     
        int palinLen = lps.back();
        cout<<palinLen<<endl;
        string toPrepend = rev.substr(0, rev.size() - palinLen);

        return toPrepend + s; 
    }
};