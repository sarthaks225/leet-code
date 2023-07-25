class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m=matrix.size()-1;
        int n=matrix[0].size()-1;
        int i=m/2;
        while(i>0)
        {
            if(matrix[i][0]<=target) break;
             i/=2;
        }
        while(i<m)
        {
            if(matrix[i][n]>=target) break;
            ++i;
        }
            if(matrix[i][0]==target) return true;
        
        
        
        
        int j=n/2;
        while(j>0)
        {
            if(matrix[i][j]<=target) break;
            j/=2;
        }
        while(j<=n)
        {
            cout<<matrix[i][j]<<"  ";
            if(matrix[i][j]==target) return true;
            ++j;
        }
         cout<<i<<"  "<<j;
        return false;
    }
};