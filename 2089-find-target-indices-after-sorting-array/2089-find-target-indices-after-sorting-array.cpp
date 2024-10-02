class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        
        vector<int> result;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=0;
        for(i=0, j=nums.size()-1; i<j; )
        {
            if(nums[i]<target)
            {
                if( (i+j)/2 == i) {
                    i=j;
                    break;
                }
                i=(i+j)/2;  
                
            }
            else{
                j=i;
                i=i/2;
            }
        }
        if(nums[i] != target) return result;
        for(; i<nums.size(); ++i)
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