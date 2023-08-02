class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n=nums.size()-1;
        int i=0;
        vector<vector<int>> result;
        while(i<n-2)
        {
            int j=i+1;
            while(j<n-1)
            {
                int e,f;
                e=j+1;
                f=n;
                while( e<f )
                {
                   long long sum=nums[i];
                    sum+=nums[j];
                    sum+=nums[e];
                    sum+=nums[f];
                    //cout<<sum<<" "<<nums[i]<<" "<<" "<<nums[j]<<" "<<" "<<nums[e]<<" "<<" "<<nums[f]<<endl;
                    if(sum==target) {
                        result.push_back({ nums[i], nums[j], nums[e], nums[f] });
                        e++;
                        f--;
                        while(nums[e-1]==nums[e] && e<f) ++e;
                        while(nums[f+1]==nums[f] && e<f) --f;
                    } else if(sum<target)
                    {
                        ++e;
                        while(nums[e-1]==nums[e] && e<f) ++e;
                        
                    }else if(sum>target)
                    {
                        --f;
                        while(nums[f+1]==nums[f] && e<f) --f;
                    }
                    
                    
                }                
                
                ++j;
                while(nums[j]==nums[j-1] && j<n-1) ++j;
            }
            ++i;
            while(nums[i]==nums[i-1] && i<n-2) ++i;            
        }
        
        return result;
        
    }
};