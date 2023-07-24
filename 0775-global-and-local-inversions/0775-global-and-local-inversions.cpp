class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        int k=nums.size()-1;
      
           for(int j=2,i=0; i<nums.size(); ++i )
           {
               if(abs(nums[i]-i)>1) return false;
           }
    
       
      
        return true;
        
    }
};