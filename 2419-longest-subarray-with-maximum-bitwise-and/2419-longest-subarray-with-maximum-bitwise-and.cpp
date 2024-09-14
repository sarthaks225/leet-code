class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int result = 0;
        // int k = 3 & 4;
        // cout<< k;
        int maxIndex = 0;
        for( int i=1; i< nums.size(); ++i)
        {
            if(nums[maxIndex] < nums[i]) maxIndex = i;
        }
        
        int prevResult = 0;
        for( int i=maxIndex; i<nums.size(); ++i)
        {
            if(nums[i] == nums[maxIndex]) ++prevResult;
            else {
                if(nums[i-1] == nums[maxIndex])
                {
                result = max(prevResult, result);
                prevResult = 0;    
                }
                
            }
        }
        
        return max(result,prevResult);
        
    }
};