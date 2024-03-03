class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int left,right;
        
        left=0;
        right=nums.size()-1;
        vector<int> ans(nums.size());
        
        for(int i=nums.size()-1;i>=0; --i )
        {
            
            if( abs(nums[left]) >= abs(nums[right]) ) 
            {
               ans[i]=nums[left]*nums[left];
                ++left;
            }
            else
            {
                ans[i]=nums[right]*nums[right];
                --right;
            }
            

        }
        /*
        for(int &num:nums)
        {
            num=num*num;
        }
        sort(nums.begin(),nums.end());
        */
        return ans;
        
    }
};