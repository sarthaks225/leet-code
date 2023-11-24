class Solution {
public:
    int longestContinuousSubstring(string s) {
        
        short count=1;
        short result=1;
        for(string::iterator i=s.begin()+1; i<s.end(); ++i)
        {
            if(*(i-1)==*i-1){
                ++count;
                if(count==26) break;
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