class Solution {
public:
    int totalNQueens(int n) {
        
        vector<int> left(n,0), diagonalUp(2*n-1,0), diagonalDown(2*n-1,0);
        int result=0;
        recur(0,result,n,left,diagonalUp,diagonalDown);
        return result;
        
    }
    
    void recur(int col, int &result, int n, vector<int> &left, vector<int> &diagonalUp, vector<int> &diagonalDown)
    {
        if(col==n)
        {
            ++result;
            return;
        }
        
        for(int row=0; row<n; ++row)
        {
            if(left[row]==0 && diagonalUp[n-1+row-col]==0 && diagonalDown[row+col]==0)
            {
                left[row]=1;
                diagonalUp[n-1+row-col]=1;
                diagonalDown[row+col]=1;
                
                recur(col+1,result,n,left,diagonalUp,diagonalDown);
                
                left[row]=0;
                diagonalUp[n-1+row-col]=0;
                diagonalDown[row+col]=0;
            }
        }
    }
        
};