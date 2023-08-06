class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> mp;
        
        int left=0 ,result=0;
        int i,n;
        char c;
        n=s.size();
        for( i=0; i<n; ++i)
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