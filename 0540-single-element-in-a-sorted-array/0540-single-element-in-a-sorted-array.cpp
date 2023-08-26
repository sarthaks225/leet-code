class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int mid=(low+high)/2;
        
        while(mid!=0 && mid!=nums.size()-1)
        {
            if(mid%2==0)
            {
                if(nums[mid]==nums[mid+1]) low=mid+1;
                else if(nums[mid]==nums[mid-1]) high=mid-1;
                else return nums[mid];
            }
            else{
                if(nums[mid]==nums[mid-1]) low=mid+1;
                else if(nums[mid]==nums[mid+1])high=mid-1;
                
            }
            mid=(low+high)/2;
        }
        return nums[mid];
    }
};