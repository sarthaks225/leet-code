struct comp {
    bool operator() ( const pair<int,int> &a, const pair<int,int> &b)
    {
        if( a.second == b.second)
        {
            return a.first < b.first;
        }
        return a.second > b.second;
    }
};
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        map< int , int> mp;
        
        for(auto num : nums)
        {
            ++mp[num];
        }
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, comp> pq;
        
        for( auto m : mp)
        {
         pq.push(pair<int,int> (m.first,m.second));
        }
        
        vector<int> result;
        
        while(!pq.empty() )
        {
            for(int i=0; i<pq.top().second; ++i)
            {
                result.push_back(pq.top().first);
            }
            pq.pop();
        }
        
        return result;
        
    }
};