class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        for(int j = 2; j < nums.size(); ++j)
        {
            if(arr1.back() > arr2.back()) arr1.push_back(nums[j]);
            else arr2.push_back(nums[j]);
        }
        
        for( auto num : arr2) arr1.push_back(num);
        
        
        return arr1; 
        
    }
};