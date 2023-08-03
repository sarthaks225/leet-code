class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int result=0;
        int lastNum=INT_MIN;
        for(vector<int>::iterator i=nums.begin(); i<nums.end(); ++i)
        {
            
            if(lastNum+1==*i)
            {
                ++count;
                lastNum=*i;
            }else if(lastNum+1<*i)
            {
                result=max(result,count);
                count=1;
                lastNum=*i;
            }
            
            
        }
        return max(result,count);
        
    }
};