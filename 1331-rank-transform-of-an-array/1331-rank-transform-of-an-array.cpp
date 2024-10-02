class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int> mp;
        
        for(auto i : arr)
        {
            mp[i]=0;
        }
        int rank=1;
        for(auto m : mp)
        {
            
            mp[m.first]=rank;
            ++rank;
        }
        // for(auto m : mp)
        // {
        // cout<<m.first<<" "<<m.second<<endl;
        // }
        
        for(vector<int>::iterator itr=arr.begin(); itr!=arr.end(); ++itr)
        {
            *itr=mp[*itr];
        }
        
        
        return arr;
    }
};