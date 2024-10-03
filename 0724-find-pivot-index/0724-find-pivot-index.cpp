class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int sum=0;
        for(int i=0; i< nums.size(); ++i)
        {
            sum+=nums[i];
            nums[i]=sum;
        }
       
        int n = nums.size()-1;
        if( 0 == nums[n] - nums[0]) return 0;
        for(int i=1; i < n ; ++i)
        {
            if(nums[i-1] == nums[n] - nums[i]) return i;
        }
        if( 0 == nums[n-1]) return n;
        return -1;
        
    }
};