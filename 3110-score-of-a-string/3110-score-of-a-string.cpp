class Solution {
public:
    int scoreOfString(string s) {
        
        int result=0;
        string::iterator i1,i2;
        i1=s.begin();
        for(i2=i1+1; i2!=s.end(); ++i1,++i2)
            result += abs(*i1 - *i2);
        return result;
        
    }
};