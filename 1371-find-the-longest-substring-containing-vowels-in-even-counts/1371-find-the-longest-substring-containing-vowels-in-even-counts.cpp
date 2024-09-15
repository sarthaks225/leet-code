class Solution {
public:
    int findTheLongestSubstring(string s) {
        
        unordered_map<int , int> mp;
        int xOr = 0;
        mp[xOr] = -1;
        int i =0;
        int result = 0;
        for(auto c : s)
        {
            if( c == 'a')
            {
                xOr^=1;
            }
            else if(c == 'e')
            {
                xOr^=1<<1;
            }
            else if(c== 'i')
            {
                xOr^=1<<2;
            }
            else if(c== 'o')
            {
                xOr^=1<<3;
            }
            else if(c=='u')
            {
                xOr^=1<<4;
            }
            
            if( mp.find(xOr) == mp.end())
            {
                mp[xOr] = i;
            }
            else
            {
                result = max (result, i - mp[xOr]);
            }
            ++i;
        }
        
        return result;
        
    }
};