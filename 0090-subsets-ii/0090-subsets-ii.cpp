class Solution {
public:
    
    void recur(vector<vector<int>> &result,vector<int> v, vector<int> &nums, int i)
    {
        result.push_back(v);
        for(int index=i ;index<nums.size(); ++index)
        {
            if(index!=i && nums[index-1]==nums[index]) continue;   
            v.push_back(nums[index]);
            recur(result,v,nums, index+1);
            v.pop_back();
                     
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        recur(result,{},nums,0);
        return result;
    }
};