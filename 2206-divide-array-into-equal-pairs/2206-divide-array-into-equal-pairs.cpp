class Solution {
public:
    bool divideArray(vector<int>& nums) {
       
        int numberOfPairs = nums.size()/2;
        unordered_map<int,int> mp;
        for(auto num : nums)
        {
            ++mp[num];
            if(mp.size() > numberOfPairs) return false;
        }
        
        for(auto m : mp)
        {
             if(m.second % 2 != 0) return false;
        }
        return true;
        
    }
};