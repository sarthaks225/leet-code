class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> result(nums.size());
        int curr;
        int rightSum=0;
        int leftSum=0;
        int n=nums.size()-1;
        for(int i=0; i<nums.size(); ++i) rightSum+=nums[i];
        for(int i=0; i<nums.size(); ++i)
        {
            
            curr=nums[i];
            rightSum-=curr;
            result[i]+=curr*i-leftSum+rightSum-curr*(n-i);
            leftSum+=curr;
            
        }
        return result;
        
        
    }
};