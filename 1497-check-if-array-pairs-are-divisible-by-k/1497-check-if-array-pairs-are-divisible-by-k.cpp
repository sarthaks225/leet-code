class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        
        vector<int> mp(k,0);
        //cout<<arr[0]%2;
        for(auto i : arr)
        {
            ++mp[i % k >= 0 ? i % k : i % k + k];
        }
        
        bool result = false;
        for(int i=0; i<=k/2; ++i)
        {
            if(mp[i]>0)
            {
                result= true;
                if(k-i == i || i==0) // when i is 0 and k-i is i
                {
                    if(mp[i]%2 !=0) return false;
                }
                else if( mp[i] != mp[k-i] ) return false;
            }
        }
      
        return result;
    }
};