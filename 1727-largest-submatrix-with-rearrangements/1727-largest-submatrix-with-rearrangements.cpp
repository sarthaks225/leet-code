class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int result=0;
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> prevRow(n,0);
        vector<int> currRow(n,0);
        
        for(int i=0; i<m; ++i)
        {
            for(int j=0; j<n; ++j)
            {
                if(matrix[i][j]) currRow[j]=prevRow[j]+matrix[i][j];
                else currRow[j]=0;
            }
            prevRow=currRow;
            
            sort(currRow.begin(),currRow.end(), greater());
            
            for(int j=0; j<n; ++j)
            {
                result=max(result,currRow[j]*(j+1));
            }
        }
        return result;
    }
}; 