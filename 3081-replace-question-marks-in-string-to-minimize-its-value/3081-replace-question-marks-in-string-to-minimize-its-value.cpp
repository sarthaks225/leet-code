class Solution {
public:
    
   struct comparator {
        bool operator()(const pair<char, int>& a, const pair<char, int>& b) {
            if (a.second == b.second) {
                return a.first > b.first;  
            }
            return a.second > b.second; 
        }
    };
    
    string minimizeStringValue(string s) {
        
        unordered_map<char , int> mp;
        
        for(char alphabet = 'a'; alphabet <= 'z'; ++alphabet)
        {
            mp[alphabet]=0;
        }
        for( auto c : s)
        {
            if(c != '?') ++mp[c];
        }
        
        priority_queue<pair<char,int>, vector<pair<char , int>>, comparator> pq;
        for (auto entry : mp) {
             pq.push({entry.first, entry.second});
        }
        
        string replaceWith = "";
        for(auto c : s)
        {
            if(c == '?')
            {
                cout<<pq.top().first;
                replaceWith += pq.top().first;
                pair<char,int> newPair(pq.top().first, pq.top().second+1);
                pq.pop();
                pq.push(newPair);    
            }
        }
        
        sort(replaceWith.begin(), replaceWith.end());
            
        int i=0;
       for (auto& c : s) {
            if (c == '?') {
                c = replaceWith[i];
                ++i;
            }
        }
        
     return s;   
    }
};