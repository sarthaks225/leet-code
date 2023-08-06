class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> mp;
        
        int left=0;
        int result=0;
        int i;
        char c;
        for( i=0; i<s.size(); ++i)
        {
            c=s[i];
            if(mp.find(c)!=mp.end())
            {
                 result=max(result,i-left);
                 left=max(left,mp[c]+1);
            }
            mp[c]=i;
        }
        result=max(result,i-left);
     return result;   
    }
};