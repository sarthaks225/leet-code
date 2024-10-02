class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        
        vector<int> result;
        sort(nums.begin(),nums.end());
        
        for(int i=0; i<nums.size(); ++i)
        {
            if(nums[i] == target)
            {
                result.push_back(i);
                for(int j=i+1; j<nums.size() && nums[j] == target; ++j)
                {
                    result.push_back(j);
                }
                break;
            }
        }
    return result;      
    }
};