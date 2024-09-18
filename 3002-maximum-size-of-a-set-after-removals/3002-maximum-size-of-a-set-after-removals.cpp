class Solution {
public:
    int maximumSetSize(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int> set1;
        unordered_set<int> set2;
        unordered_set<int> common;
        int originalSize1 = nums1.size();
        
        for( int i=0; i<nums1.size(); ++i)
        {
          
                set1.insert(nums1[i]);
                if( set2.find(nums1[i]) !=set2.end() )
                {
                    common.insert(nums1[i]);
                }
            
           
                set2.insert(nums2[i]);
                if( set1.find(nums2[i]) !=set1.end()  )
                {
                    common.insert(nums2[i]);
                }
        }
        
        return min( (min(nums1.size()/2, set1.size() - common.size() ) + min(nums2.size()/2, set2.size() - common.size()) + common.size() ),
                      nums1.size() );
      
    }
};