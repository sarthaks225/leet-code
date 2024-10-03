class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(!nums.size()) return {-1,-1};
        int i,j;
        for(i = 0, j=nums.size()-1; i<j; )
        {
            if(nums[i] < target)
            {
                if( (i+j)/2 == i ) break;
                i=(i+j)/2;
            }
            else
            {
                j=i;
                i/=2;
            }
        }
        
        if(nums[i]!=target && nums[j]!=target) return {-1,-1};
        
        int start = nums[i] == target ? i : j;
        
        for(i=start, j=nums.size()-1; i<j; )
        {
            if(nums[j] > target)
            {
                if( (i+j)/2 == j) break;
                j = (i+j)/2;
            }
            else 
            {
                i=j;
                j=(j+nums.size()-1)/2;
            }
        }
        
        int end = nums[j] == target ? j : i;
        return {start, end};
        
    }
};