class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        
        map<int , int> mp;
        
        for( auto nums : nums1)
        {
            mp[nums[0]] = nums[1];
        }
        
        for( auto nums : nums2)
        {
            if( mp.find( nums[0] ) != mp.end() ){
                mp[nums[0]] = mp[nums[0]] + nums[1];
            }
            else {
                mp[nums[0]] = nums[1];
            }
        }
        
        vector< vector<int>> result;
        for( auto item : mp)
        {
           result.push_back( {item.first, item.second} ); 
        }
        return result;      
    }
};