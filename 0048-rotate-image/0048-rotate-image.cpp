class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        for(int i=0; i<matrix.size(); ++i) //for transpose of Matrix
        {
            for(int j=i+1; j<matrix.size(); ++j)
            {
                std::swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(int i=0; i<matrix.size(); ++i)
        {
            for(int j=0; j<matrix.size()/2; ++j)
            {
                swap(matrix[i][j],matrix[i][matrix.size()-1-j]);
            }
        }
        
        
        /*
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
        */
    }
};