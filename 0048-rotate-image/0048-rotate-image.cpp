class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int size=matrix.size();
        vector<vector<int>> newMatrix;
        newMatrix.resize(size);
        for(int j=0; j<size; ++j)
        {
            newMatrix[j].resize(size);
            for(int i=0,l=size-1; i<size; ++i,--l)
            {
                newMatrix[j][l]=matrix[i][j];
            }
        }

        for(int i=0; i<size; ++i)
        {
            
            for(int j=0; j<size; ++j)
            {
                matrix[i][j]=newMatrix[i][j];
            }
        }



    }
};