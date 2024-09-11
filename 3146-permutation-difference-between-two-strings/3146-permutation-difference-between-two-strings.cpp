class Solution {
public:
    int findPermutationDifference(string s, string t) {
        
        unordered_map<char, int> umap;
        int result = 0;
        for( int index=0; index <s.length(); ++index)
        {
            umap[s[index]]=index;
        }
        
        for(int index=0; index < t.length(); ++index)
        {
            result += abs( umap[t[index]] - index );
        }
        return result;
    }
};