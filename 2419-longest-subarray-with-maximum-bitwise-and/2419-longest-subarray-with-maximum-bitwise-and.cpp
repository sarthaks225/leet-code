class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int result = 0;
        int counter = 0;
        int maxNum = 0;
        for( auto num : nums)
        {
            if(maxNum == num) ++counter;
            else {
                if(maxNum < num) {
                    maxNum = num;
                    result=0;
                    counter=1;
                }
                else if(maxNum > num)
                {
                      result = max(counter, result);
                    counter=0;
                   
                }
                
            }
        }
 
        
        return max(result,counter);
        
    }
};