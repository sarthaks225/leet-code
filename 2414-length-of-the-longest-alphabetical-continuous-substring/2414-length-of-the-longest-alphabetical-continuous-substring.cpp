class Solution {
public:
    int longestContinuousSubstring(string s) {
        
        int count=1;
        int result=1;
        for(int i=1; i<s.size(); ++i)
        {
            if(s[i-1]==s[i]-1)
            {
                ++count;
            }
            else {
                result=result>count?result:count;
                count=1;
            }
            
        }
        result=result>count?result:count;

        return result;
    }
};