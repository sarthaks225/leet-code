class Solution {
    public int[] runningSum(int[] nums) {
        
        
        int numsLength=nums.length;
        
        
        for(int i=1; i<numsLength; ++i)
        {
            nums[i]+=nums[i-1];
            
        }
        
        return nums;
    }
}