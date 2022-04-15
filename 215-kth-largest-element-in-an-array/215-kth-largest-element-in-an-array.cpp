class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<int>::iterator i=nums.end();
        
        while(k--)
        {
            --i;
        }
        return *i;
    }
};