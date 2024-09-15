class Solution {
public:
    int edgeScore(vector<int>& edges) {
        
        unordered_map<int , long long > mp;
        int index=0;
        for(auto edge : edges)
        {
            mp[edge]+=index;
            ++index;
        }
        
        int result=-1;
        long long max = -1;
        for( auto m : mp)
        {
            if(m.second > max)
            {
                result = m.first;
                max = m.second;
            }
            else if( m.second == max)
            {
                if(result > m.first)
                {
                    result = m.first;
                    max = m.second;
                }
            }
        }
        
        return result;
        
    }
};