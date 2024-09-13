class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        
        vector<vector<int>> result;
        vector<vector<int>> :: iterator i1, i2;
        
        for( i1=nums1.begin(), i2=nums2.begin(); i1!=nums1.end() && i2!=nums2.end(); )
        {
            if((*i1)[0] == (*i2)[0])
            {
                result.push_back({(*i1)[0], (*i1)[1] + (*i2)[1]});
                ++i1;
                ++i2;
            }else
            {
                if((*i1)[0] < (*i2)[0])
                {
                    result.push_back({(*i1)[0], (*i1)[1]});
                   ++i1;
                   
                }
                else
                {
                    result.push_back({(*i2)[0], (*i2)[1]});
                 ++i2;
                }
            }
            
        }
        
        for( ; i1!=nums1.end(); ++i1)
        {
            result.push_back({(*i1)[0], (*i1)[1]});
        }
        for( ; i2!=nums2.end(); ++i2)
        {
            result.push_back({(*i2)[0], (*i2)[1]});
        }
        return result;
        /*
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
        */
    }
};