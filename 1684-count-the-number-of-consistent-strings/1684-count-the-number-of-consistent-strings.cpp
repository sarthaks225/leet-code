class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set <char> set;
        int result = 0;
        for(auto c : allowed) set.insert(c);
        
        for( auto word : words)
        {
            ++result;
            for( auto c : word)
            {
                if( set.find(c) == set.end() ){
                    --result;
                    break;
                }
            }
        }
        return result;
    }
};