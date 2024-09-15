class Comparator
{
    public : 
    bool operator()(const pair<int,int> & a, const pair<int,int> & b)
    {
        return a.second > b.second;
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map <int, int> mp;
        
        for( auto num : nums) ++mp[num];
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, Comparator> pq;
        
        for(auto m : mp)
        {
            pq.push(pair<int,int>(m.first, m.second));
            if(pq.size() > k) pq.pop();
        }
        
        while( !pq.empty())
        {
            result.push_back(pq.top().first);
            pq.pop();
        }

        return result;
    }
};