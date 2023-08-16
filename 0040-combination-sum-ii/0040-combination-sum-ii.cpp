class Solution {
public:
    void recur(vector<vector<int>> &resultSet, vector<int> &v,int &target, vector<int>::iterator itr,vector<int> &candidates)
    {
       for(vector<int>::iterator i=itr; i!=candidates.end(); ++i)
       {
           if(itr<i && *(i-1)==*i) continue;
           if(*i>target) return;
           target-=*i;
           v.push_back(*i);
           if(target==0)
           {
               resultSet.push_back(v);
               v.pop_back();
           target+=*i; 
               return;
           }
           recur(resultSet,v,target, i+1,candidates);
           v.pop_back();
           target+=*i;    
           
           
       }
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(),candidates.end());
        vector<int> v;
          vector<vector<int>> result;
        recur(result,v,target, candidates.begin(),candidates);
        
            
        return result;
        
    }
};