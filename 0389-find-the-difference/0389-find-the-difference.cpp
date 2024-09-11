class Solution {
public:
    char findTheDifference(string s, string t) {
        
        char result = 0;
        for(int i=0; i<s.length(); ++i )
        {
            result ^=( s[i] ^ t[i] );
        }
        
        return result ^= t[t.length()-1];        
        
    }
};