class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        
        unordered_map<string, int> mp;
        for(auto word : arr)
        {
            ++mp[word];
        }
        
        vector<string> result;
        for( auto word  : arr)
        {
            if(mp[word] == 1)
            {
                result.push_back(word);
            }
        }
        
        if(result.size() < k) return "";
        return result[k-1];
        
        
    }
};