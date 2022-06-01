class Solution {
    public int[] runningSum(int[] nums) {
        
        int prevSum=0;
        int numsLength=nums.length;
        
        
        for(int i=0; i<numsLength; ++i)
        {
            prevSum=nums[i]=nums[i]+prevSum;
            
        }
        
        return nums;
    }
}