class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
        
        for(int i=0; i<4; ++i)
        {
            if(isEqual(mat,target))
            {
                return true;
            }
            
            rotate(mat);
            
        }
        
        
        return false;
    }
    
    bool isEqual(vector<vector<int>> &mat,vector<vector<int>> &target)
    {
        for(int i=0; i<mat.size(); ++i)
        {
            for(int j=0; j<mat.size(); ++j)
            {
                if(mat[i][j]!=target[i][j]) return false;
            }
        }
        return true;
    }
    
    void rotate(vector<vector<int>> &mat)
    {
       
        for(int j=0; j<mat.size(); ++j)
        {
            for(int i=j+1; i<mat.size(); ++i)
            {
                swap(mat[i][j],mat[j][i]);
                
            }
        }    
        
        for(int i=0; i<mat.size(); ++i)
        {
            for(int j=0; j<mat.size()/2; ++j)
            {
                swap(mat[i][j],mat[i][mat.size()-1-j]);
                
            }
            
        }
    }
};