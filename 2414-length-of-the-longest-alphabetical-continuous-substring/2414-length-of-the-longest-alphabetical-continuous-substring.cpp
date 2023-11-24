class Solution {
public:
    int longestContinuousSubstring(string s) {
        
        int count=1;
        int result=1;
        for(string::iterator i=s.begin()+1; i<s.end(); ++i)
        {
            if(*(i-1)==*i-1) ++count;
            else {
                result=result>count?result:count;
                count=1;
            }
        }
        result=result>count?result:count;

        return result;
    }
};