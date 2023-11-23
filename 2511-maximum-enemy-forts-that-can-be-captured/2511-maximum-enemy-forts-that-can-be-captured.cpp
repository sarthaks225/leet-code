class Solution {
public:
    int captureForts(vector<int>& nums) {
        
        short loca;
        int indexLoca;
        int i=0;
        for(i=0; i<nums.size(); ++i)
        {
            if(nums[i]!=0)
            {
                loca=nums[i];
                indexLoca=i;
                ++i;
                break;
            }
        }
        int result=0;
        while(i<nums.size())
        {
            if(nums[i]!=0)
            {
                if(nums[i]!=loca)
                result=result>i-indexLoca-1?result:i-indexLoca-1;
                indexLoca=i;
                loca=nums[i];
            }
            ++i;
            
        }
        
        
        return result;
    }
};