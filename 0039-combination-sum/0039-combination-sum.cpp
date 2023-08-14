class Solution {
public:
    void recur(vector<vector<int>> &result, vector<int> v,int index, vector<int> &candidates, int target)
    {
     
        for(int i=index; i<candidates.size(); ++i)
        {
            target-=candidates[i];
            v.push_back(candidates[i]);

            
            if(0==target) 
            {
                result.push_back(v);
            }
            else if(0>target)
            {
                target+=candidates[i];
                v.pop_back();
                return;
            }
            
            recur(result,v,i,candidates,target);
             target+=candidates[i];
                v.pop_back();
        }
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> result;
        recur(result,{},0,candidates,target);
        return result;
    }
};