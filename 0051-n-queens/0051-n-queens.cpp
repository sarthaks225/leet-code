class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>> result;
        string s(n,'.');
        vector<string> board(n,s);
        vector<int> diagonalUp(2*n-1,0);
        vector<int> diagonalDown(2*n-1,0);
        vector<int> left(n,0);
        recur(0,board,result,n, left, diagonalUp, diagonalDown);
        return result;
    }

    void recur(int col,vector<string> &board, vector<vector<string>> &result, int n, vector<int> &left, vector<int> &diagonalUp, vector<int> &diagonalDown)
    {
        
        if(col==n)
        {
            result.push_back(board);
            return;
        }
        
        for(int row=0; row<n; ++row)
        {
            if(left[row]==0 && diagonalUp[n-1+row-col]==0 && diagonalDown[row+col]==0)
            {
                board[row][col]='Q';
                
                left[row]=1;
                diagonalUp[n-1+row-col]=1;
                diagonalDown[row+col]=1;
                recur(col+1, board, result, n, left, diagonalUp, diagonalDown);
                
                board[row][col]='.';
                
                left[row]=0;
                diagonalUp[n-1+row-col]=0;
                diagonalDown[row+col]=0;
            }
        }
    }
    
    /*
    void recur(int col,vector<string> &board, vector<vector<string>> &result, int n)
    {
        
        if(col==n)
        {
            result.push_back(board);
            return;
        }
        
        for(int row=0; row<n; ++row)
        {
            if(isSafe(row,col,board,n))
            {
                board[row][col]='Q';
                recur(col+1, board, result, n);
                
            }
            board[row][col]='.';
            
        }
    }
    
    
    bool isSafe(int row, int col, vector<string> &board, int n)
    {
        for(int i=row-1,j=col-1; i>=0 && j>=0; --i, --j)
        {
            if(board[i][j]=='Q') return false;
        }
        
        for(int i=row, j=col-1; j>=0; --j)
        {
            if(board[i][j]=='Q') return false;
        }
        
        for(int i=row+1, j=col-1; i<n && j>=0; ++i, --j)
        {
            if(board[i][j]=='Q') return false;
        }
        
        return true;
        
    }
  */  
};