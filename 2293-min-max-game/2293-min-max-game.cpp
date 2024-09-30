class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int size=nums.size();
        for(int i=0; i<size/2; )
        {
            if(i%2==0) //even index
            {
                nums[i]=min( nums[2*i], nums[2*i+1]);
            }
            else { //odd index
                nums[i]=max( nums[2*i], nums[2*i+1]);
            }
            ++i;
            if(i==size/2)
            {
                size/=2;
                i=0;
            }
        }
        return nums[0];
        
    }
};