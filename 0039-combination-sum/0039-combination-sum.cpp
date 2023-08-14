class Solution {
public:
    void recur(vector<vector<int>> &result, vector<int> v,int index,int sum, vector<int> &candidates, int target)
    {
     
        for(int i=index; i<candidates.size(); ++i)
        {
            sum+=candidates[i];
            v.push_back(candidates[i]);

            
            if(sum==target) 
            {
                result.push_back(v);
            }
            else if(sum>target)
            {
                sum-=candidates[i];
                v.pop_back();
                return;
            }
            
            recur(result,v,i,sum,candidates,target);
             sum-=candidates[i];
                v.pop_back();
        }
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> result;
        recur(result,{},0,0,candidates,target);
        return result;
    }
};