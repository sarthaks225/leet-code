class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1;
        unordered_set<int> set2;
        vector<int> result;
        for(auto num : nums1)
        {
            set1.insert(num);
        }
        
        for(auto num : nums2)
        {
            if(set1.find(num) != set1.end())
            {
                result.push_back(num);
                set1.erase(num);
            }
        }
        
        return result;
        
    }
};