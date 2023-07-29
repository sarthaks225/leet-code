class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    vector<vector<int>> result;
        for(int i=0; i<nums.size()-2 ;++i)
        {
            if(i!=0 && nums[i-1]==nums[i]) continue;
            for(int j=i+1,k=nums.size()-1; j<k;)
            {
                if(i+1!=j && nums[j-1]==nums[j] )
                {
                    ++j;
                    continue;
                }
                if(k!=nums.size()-1 && nums[k+1]==nums[k])
                {
                    --k;
                    continue;
                }
                if(nums[i]+nums[j]+nums[k]>0)
                {
                    
                    --k;
                }
                else if(nums[i]+nums[j]+nums[k]<0)
                {
                    ++j;
                }
                else 
                {
                    result.push_back({nums[i],nums[j],nums[k]});
                    ++j;
                    --k;
                }
                
                
            }
        }
        return result;
        
        
        /*
        set<vector<int>> resultSet;
        vector<int>::iterator itr1,itr2;
        int num3;
        for(itr1=nums.begin(); itr1<nums.end(); ++itr1)
        {
            set<int> hashSet;            
            for(itr2=itr1+1; itr2<nums.end(); ++itr2)
            {
                num3=-(*itr1+*itr2);
                if(hashSet.find(num3)!=hashSet.end())
                {
                    vector<int> result={*itr1,*itr2,num3};
                    sort(result.begin(),result.end());
                    resultSet.insert(result);
                }
                    hashSet.insert(*itr2);
            }
        }
        
        
        vector<vector<int>> result(resultSet.begin(),resultSet.end());
       
        return result;
        */
    }
};