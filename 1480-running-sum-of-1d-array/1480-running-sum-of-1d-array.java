class Solution {
    public int[] runningSum(int[] nums) {
        
        int prevSum=0;
        int numsLength=nums.length;
        int[] sol=new int[numsLength];
        
        for(int i=0; i<numsLength; ++i)
        {
            prevSum=sol[i]=nums[i]+prevSum;
            
        }
        
        return sol;
    }
}