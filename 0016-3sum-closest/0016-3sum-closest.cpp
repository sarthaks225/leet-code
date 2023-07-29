class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());

        int prevComparator=INT_MAX;
        int currSum,comparator,sum;
        
        for(int i=0; i<nums.size()-2 ; ++i)
        {
            for(int j=i+1, k=nums.size()-1; j<k; )
            {
                currSum=nums[i]+nums[j]+nums[k];
                comparator=currSum-target;
                if(comparator<0) comparator*=-1;
                if(comparator<prevComparator)
                {
                    sum=currSum;
                    if(comparator==0) break;
                    prevComparator=comparator;
                }
                    
               if(target>currSum) ++j;
               else if(target<currSum) --k;
            }
           if(comparator==0) break;
        }
        
        return sum;
    }
};