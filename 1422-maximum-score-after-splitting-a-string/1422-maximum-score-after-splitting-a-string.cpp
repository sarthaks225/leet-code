class Solution {
public:
    int maxScore(string s) {
        int zeros=0;
        int ones=0;
        int result=0;
        for(int i=0; i<s.size(); ++i) if(s[i]=='1') ++ones;
        for(int i=0; i<s.size()-1; ++i)
        {
            if(s[i]=='0') ++zeros;
            else --ones;
            result=result>zeros+ones?result:zeros+ones;
        }
        return result;
    }
};