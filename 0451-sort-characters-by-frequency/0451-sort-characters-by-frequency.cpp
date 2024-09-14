class Comparator
{
    public : 
        bool operator()(pair<char, int> &a,pair<char,int> &b )
        {
            return a.second < b.second;
        }
};

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        
        for( auto c : s)
        {
                ++mp[c];
        }
        
        priority_queue<pair<char, int>, vector<pair<char,int>>, Comparator> pq;
        
        for(auto m : mp)
        {
            pq.push(pair<char,int> (m.first, m.second ));
        }
        
        string result = "";
        while(!pq.empty())
        {
            int f = pq.top().second;
            int c = pq.top().first;
            for( int i =0; i<f; ++i)
            {
                result+=c;
            }
            pq.pop();
        }
        
      return result;
    }
};

