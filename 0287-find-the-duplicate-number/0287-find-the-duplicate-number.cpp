class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int i=nums[0];
        int j=i; 
        while(1)
        {
            i=nums[i];
            j=nums[nums[j]];
            if(i==j) break;
            
        }
        for(i=nums[0]; i!=j; i=nums[i])
        {
            j=nums[j];
        }
        return j;
        /*
        
        vector<int> freq;
        freq.resize(nums.size());

        for(vector<int>::iterator itr=nums.begin(); itr<nums.end(); ++itr)
        {
            
            if(freq[*itr]==1) return *itr;
                else freq[*itr]++;
            
        }
        
        return 0;
        */
    }
};