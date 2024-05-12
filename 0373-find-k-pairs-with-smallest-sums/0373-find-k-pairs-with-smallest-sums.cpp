class Solution {
public:
    class comparotor
    {
        public: 
        bool operator()(pair<int,int> &a, pair<int,int> &b){
            return a.first+a.second < b.first+b.second ;
        }
            
    };
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue< pair<int,int>, vector<pair<int,int>>, comparotor> pq;
        vector<vector<int>> result;
                
        for(int i=0; i<nums1.size(); ++i)
        {
            for(int j=0; j<nums2.size(); ++j)
            {
                if(pq.size()>=k && nums1[i]+nums2[j] >= pq.top().first + pq.top().second) break;
                pq.push({nums1[i],nums2[j]});
                if(pq.size()>k) pq.pop();
            }
        }
        
        while(!pq.empty()){
            result.push_back({pq.top().first, pq.top().second});
            pq.pop();
        }
        
        return result;
              
    }
};