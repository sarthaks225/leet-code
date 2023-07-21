class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        vector<int> freq;
        freq.resize(nums.size());

        for(vector<int>::iterator itr=nums.begin(); itr<nums.end(); ++itr)
        {
            
            if(freq[*itr]==1) return *itr;
                else freq[*itr]++;
            
        }
        return 0;
    }
};