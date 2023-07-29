class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count,find,i,j,k;
        count=0;
        for(i=0; i<nums.size()-2; ++i)
        {
            
            find=diff+nums[i];
            j=i+1;
            while(j<nums.size()-1 && nums[j]<find) ++j;
           
            if(j<nums.size()-1 && find==nums[j])
            {
                k=j+1;
                find=diff+find;
                
                while(k<nums.size() && nums[k]<find) ++k;
                
                if(k<nums.size() && nums[k]==find) ++count;

            }
           
            
            
        }
        return count;
            
            
            
        
        
    }
};